#!/bin/python

import tensorflow as tf

import numpy as np

def model():
	x = tf.placeholder(tf.float32, shape=[1,10])
	W = tf.Variable(np.random.random((10,20)).astype(np.float32))

	y = tf.matmul(x, W)

	saver = tf.train.Saver()

	return x, y, saver

def save():
	sess = tf.Session()
	x, y, saver = model()
	sess.run(tf.global_variables_initializer())
	print(saver.save(sess, 'checkpoints/my-model', global_step=0))

	np.random.seed(31415)
	a = sess.run(y, feed_dict={x : np.random.random((1, 10))})

	print(a)

def restore():
	sess = tf.Session()
	x, y, saver = model()
	ckpt = tf.train.latest_checkpoint('checkpoints') 
	saver.restore(sess, ckpt) #'my-model-0')

	np.random.seed(31415)
	a = sess.run(y, feed_dict={x : np.random.random((1, 10))})

	print(a)
