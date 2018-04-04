import numpy as np
import tensorflow as tf

def save_W1(W1):
    W1_numpy = np.empty((0), dtype = float)
    for i in range (0,3):    
        aux = W1[: , : , i , 0]
        aux = np.reshape(aux,(3,3))
        W1_numpy = np.append(W1_numpy,aux)
    np.savetxt('weights.in',W1_numpy, fmt = '%.6f',delimiter=' ') 

def save_out(W1):
    W1 = np.reshape(W1,(1))
    np.savetxt('output.in',W1, fmt = '%.6f',delimiter=' ') 

########################################
########################################
########################################


def save_image(W1):
    aux2 = W1[0,:,:,:]
    W1_numpy = np.empty((0), dtype = float)
    for i in range (0,3):
        aux = aux2[ : ,: , i ]
        W1_numpy = np.append(W1_numpy,aux)
        
    np.savetxt('image.in',W1_numpy,fmt = '%.6f', delimiter=' ') 

    


########################################
########################################
########################################

def save_bias(b):
	np.savetxt("bias.in", b, fmt = '%.6f', delimiter = ' ')


def initialize_parameters():
    
    tf.set_random_seed(1)                              # so that your "random" numbers match ours
    
    image =  tf.get_variable("image", [1,3,3,3], initializer = tf.contrib.layers.xavier_initializer(seed = 0))
    W =  tf.get_variable("W", [3,3,3,1], initializer = tf.contrib.layers.xavier_initializer(seed = 0))
    b =  tf.get_variable("b", [1], initializer = tf.contrib.layers.xavier_initializer(seed = 0))
    
    parameters = {"image":image,
    			  "W": W,
                  "b": b}
    
    return parameters

parameters = initialize_parameters();

image = parameters["image"]
W = parameters["W"]
b = parameters["b"]

init = tf.global_variables_initializer()

Z = tf.nn.conv2d(image, W, strides = [1, 1, 1, 1], padding = 'VALID')
Z = tf.nn.bias_add(Z, b)

with tf.Session() as sess:
    sess.run(init)
    save_W1(sess.run(W))
    save_bias(sess.run(b))
    save_image(sess.run(image))
    save_out(sess.run(Z))
    

