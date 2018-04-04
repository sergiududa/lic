import numpy as np
import tensorflow as tf


def save_out(W1):
    W1 = W1[0,0,0,:]
    np.savetxt('output.in',W1, fmt = '%.6f',delimiter=' ') 

def save_image(W1):
    aux2 = W1[0,:,:,:]
    W1_numpy = np.empty((0), dtype = float)
    for i in range (0,3):
        aux = aux2[ : ,: , i ]
        W1_numpy = np.append(W1_numpy,aux)
        
    np.savetxt('image.in',W1_numpy,fmt = '%.6f', delimiter=' ') 
def initialize_parameters():
    
    tf.set_random_seed(1)                              # so that your "random" numbers match ours
    
    image =  tf.get_variable("image", [1,3,3,3], initializer = tf.contrib.layers.xavier_initializer(seed = 0))
    
    parameters = {"image":image}
    
    return parameters

parameters = initialize_parameters();

image = parameters["image"]


init = tf.global_variables_initializer()

Z = tf.nn.avg_pool(image, ksize = [1, 3, 3, 1], strides = [1, 2 ,2, 1], padding = 'VALID')


with tf.Session() as sess:
    sess.run(init)
    save_image(sess.run(image))
    save_out(sess.run(Z))
    #print(sess.run(Z))
    #print(sess.run(image))
    

