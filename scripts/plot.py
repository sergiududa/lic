from tensorflow.examples.tutorials.mnist import input_data
import tensorflow as tf
import numpy as np
import matplotlib.pyplot as plt

#Loading Mnist Dataset
mnist = input_data.read_data_sets("MNIST_data", one_hot = True, reshape=False)

#Train set
X_train, y_train = mnist.train.images, mnist.train.labels

image = 2

for i in range (0 ,10):
	if (y_train[image,i] == 1):
		label = i;

X = X_train[image,: , :, 0]

plt.title('Label is {label}'.format(label=label))
plt.imshow(X, cmap='gray')
plt.show()
np.savetxt('image.in',X,fmt = '%.6f', delimiter=' ') 
