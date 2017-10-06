import tensorflow as tf 
import tensorflow.contrib.slim as slim
import numpy as np 
import matplotlib.pyplot as plt 
import os
import librosa
import sys
#                                                                             |

sess = tf.Session()

#Creates weight variables for the ANN and groups them in a collection for use in L2 regularization
def weight_variable(shape_, name_): 
	initial = tf.truncated_normal(shape_, name=name_, stddev=0.15) #Initialized with a truncated normal random variable
	tf.add_to_collection('l2', tf.reduce_sum(tf.pow(initial,2))) #Adding to L2 collection, summing squares
	return tf.Variable(initial)

#Takes a file path to a .wav file and outputs said file processed using the trained ANN
#Audio file must be in the same folder as this script
#Dependent on the LIBROSA python library and os library
def write_audio(filename,outname, net_):
	data_path = filename #Finds file path to script and appends filename
	y, sr = librosa.load(data_path) #Loads audio into python with samples 'y' and sampling rate 'sr' - 22.05kHz by default
	D = librosa.stft(y) #STFT of input audio saved as D
	mag = D 
	mag = np.abs(mag) #Magnitude response of the STFT
	remember = mag.max(axis=0)+0.000000001 #Used for normalizing STFT frames (with addition to avoid division by zero)
	mag = mag / remember #Normalizing
	phase = np.angle(D) #Phase response of STFT
	mag = np.transpose(mag) #Because dimensions were giving problems
	new_mag = np.asarray(sess.run(net_, feed_dict={x_:mag})) #Process magnitude STFT frames through the ANN
	new_mag = np.transpose(new_mag) #Again dimensions were giving problems
	new_mag *= remember #Un-normalize the STFT frames
	E = new_mag*np.exp(1j*phase) #Use magnitude and phase to produce complex-valued STFT
	out = librosa.istft(E) #Inverse STFT
	out = out/(np.max(out)+0.2)
	filename = filename[:-4]+'_'
	librosa.output.write_wav(filename+str(outname),out,sr) #Write output

def tune_knobs(filename_,tag_,knobs_):
	ckpt = tf.train.latest_checkpoint('checkpoints') 
	saver.restore(sess, ckpt)
	length = len(knobs_)
	a = np.ones((1,fc4))	#Pre-allocation
	its = fc4 // length
	for w in range(length):
		a[:,(w*its):] = knobs_[w] #Vector of knob values
	a = np.float32(a)	#Type matching to latent representation
	layer1 = tf.nn.relu(tf.matmul(x_, W_fc1))
	layer2 = tf.nn.relu(tf.matmul(layer1, W_fc2))
	layer3 = tf.nn.relu(tf.matmul(layer2, W_fc3))
	layer4 = tf.nn.sigmoid(tf.matmul(layer3, W_fc4))
	layer4 = tf.multiply(layer4,a)
	layer5 = tf.nn.relu(tf.matmul(layer4, W_fc5))
	layer6 = tf.nn.relu(tf.matmul(layer5, W_fc6))
	layer7 = tf.nn.relu(tf.matmul(layer6, W_fc7))
	output_ = tf.nn.sigmoid(tf.matmul(layer7, W_fc8))
	filename = filename_
	write_audio(filename,tag_, output_)

#Generating weights for the fully connected layers
#fc- refers to the -th fully connected layer's neuron width
input_size = 1025
fc1 = 512
fc2 = 256
fc3 = 128
fc4 = 64
fc5 = fc3
fc6 = fc2
fc7 = fc1
output_size = input_size
W_fc1 = weight_variable([input_size, fc1],'W_fc1')
W_fc2 = weight_variable([fc1, fc2],'W_fc2')
W_fc3 = weight_variable([fc2, fc3],'W_fc3')
W_fc4 = weight_variable([fc3, fc4],'W_fc4')
W_fc5 = weight_variable([fc4, fc5],'W_fc5')
W_fc6 = weight_variable([fc5, fc6],'W_fc6')
W_fc7 = weight_variable([fc6, fc7],'W_fc7')
W_fc8 = weight_variable([fc7, input_size],'W_fc8')
print('Fully Connected Layer Params Defined')

#Generating placeholders for the input and label data
x_ = tf.placeholder(tf.float32, shape=[None, 1025])
y_ = tf.placeholder(tf.float32, shape=[None, 1025])

#Multiplying fully connected layers with ReLU/Sigmoid activations
layer1 = tf.nn.relu(tf.matmul(x_, W_fc1))
layer2 = tf.nn.relu(tf.matmul(layer1, W_fc2))
layer3 = tf.nn.relu(tf.matmul(layer2, W_fc3))
layer4 = tf.nn.sigmoid(tf.matmul(layer3, W_fc4))
layer5 = tf.nn.relu(tf.matmul(layer4, W_fc5))
layer6 = tf.nn.relu(tf.matmul(layer5, W_fc6))
layer7 = tf.nn.relu(tf.matmul(layer6, W_fc7))
output_ = tf.nn.sigmoid(tf.matmul(layer7, W_fc8))


saver = tf.train.Saver()

restore = True

if restore:
	ckpt = tf.train.latest_checkpoint('checkpoints') 
	saver.restore(sess, ckpt)

print('Everything Loaded \n')
while True:
  s = input()
  s = s.split()
  filename = s[0]
  knobs = s[1].split(',')
  nameout = s[2]
  print(filename)
  tune_knobs(filename, nameout, knobs)
  if s == 'break':
    break


# filename = sys.argv[1]
# knobs = sys.argv[2].split(',')
# nameout = sys.argv[3]
# tune_knobs(filename, nameout, knobs)

print('Everything Done')