import numpy as np

fc4 = 64
knobs_ = [1,2,3,4,5]
length = len(knobs_)
a = np.ones((1,fc4))	#Pre-allocation
its = fc4 // length
for w in range(length):
	a[:,(w*its):] = knobs_[w] #Vector of knob values
a = np.float32(a)	#Type matching to latent representation
print(a)