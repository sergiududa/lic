from tensorflow.examples.tutorials.mnist import input_data
import numpy as np
import tensorflow as tf
import math
from sklearn.utils import shuffle
from scipy.io import savemat
from tensorflow.python.framework import ops


def save_3D(W1,name):
    W1_numpy = np.empty((0), dtype = float)
    n = W1.shape[2]
    for i in range (0,n):
        aux = W1[ : ,: , i]
        W1_numpy = np.append(W1_numpy,aux)
        
    np.savetxt(name,W1_numpy,fmt = '%.6f', delimiter=' ') 

def save_4D(W1,name):
    W1_numpy = np.empty((0), dtype = float)
    f = W1.shape[3]
    c = W1.shape[2]
    for i in range (0,f):
        for j in range (0,c):
            aux = W1[ : ,: , j, i]
            W1_numpy = np.append(W1_numpy,aux)
    np.savetxt(name,W1_numpy,fmt = '%.6f', delimiter=' ') 



#Loading Mnist Dataset
mnist = input_data.read_data_sets("MNIST_data", one_hot = True, reshape=False)

#Train set
X_dataset, y_dataset = mnist.train.images, mnist.train.labels
X_dataset = np.pad(X_dataset, ((0,0),(2,2),(2,2),(0,0)), 'constant')

X_test = X_dataset[0,:,:,:]
X_test = np.reshape(X_test, (1,32,32,1))

# PlaceHolder
X = tf.placeholder(tf.float32, (None, 32, 32, 1))

#Initiliaze params

tf.set_random_seed(1)          
        
W1 =  tf.get_variable("W1", [4,4,1,8], initializer = tf.contrib.layers.xavier_initializer(seed = 0))
W2 =  tf.get_variable("W2", [2,2,8,16], initializer = tf.contrib.layers.xavier_initializer(seed = 0))

b1 =  tf.get_variable("b1", [8], initializer = tf.contrib.layers.xavier_initializer(seed = 0))
b2 =  tf.get_variable("b2", [16], initializer = tf.contrib.layers.xavier_initializer(seed = 0))
   
conv_filters = { "conv1_s" : 1,
                 "conv2_s" : 1}

pool_filters = { "pool1_s" : 2,
                 "pool1_f" : 2,
                 "pool2_s" : 2,
                 "pool2_f" : 2}


Z1 = tf.nn.conv2d(X, W1, strides = [1, conv_filters["conv1_s"], conv_filters["conv1_s"], 1], padding = 'VALID')# + b1;
Z1 = tf.nn.bias_add(Z1, b1)
A1 = tf.nn.relu(Z1)

    #POOL1
P1 = tf.nn.max_pool(A1, ksize = [1, pool_filters["pool1_f"], pool_filters["pool1_f"], 1], strides = [1, pool_filters["pool1_s"], pool_filters["pool1_s"], 1], padding = 'VALID')

    #CONV2
Z2 = tf.nn.conv2d(P1, W2, strides = [1, conv_filters["conv2_s"], conv_filters["conv2_s"], 1], padding = 'VALID')# + b2;
Z2 = tf.nn.bias_add(Z2, b2)
A2 = tf.nn.relu(Z2)

    #POOL2
P2 = tf.nn.max_pool(A2, ksize = [1, pool_filters["pool2_f"], pool_filters["pool2_f"], 1], strides = [1, pool_filters["pool2_s"], pool_filters["pool2_s"], 1], padding = 'VALID')

    #Generate the input for the first fully conected layer

P2_flatten = tf.contrib.layers.flatten(P2)

with tf.variable_scope("LogReg"):
    Z3 = tf.contrib.layers.fully_connected(P2_flatten, 120, activation_fn = tf.nn.relu, scope = 'fc1')
    Z4 = tf.contrib.layers.fully_connected(Z3, 84, activation_fn = tf.nn.relu, scope = 'fc2')
    Z5 = tf.contrib.layers.fully_connected(Z4, 10, activation_fn = tf.nn.relu, scope = 'fc3')

init = tf.global_variables_initializer()
     
    # Start the session to compute the tensorflow graph
with tf.Session() as sess:
    sess.run(init)
    with tf.variable_scope('LogReg', reuse=True):
        weights = tf.get_variable('fc1/weights')
        biases = tf.get_variable('fc1/biases')
        sess.run([weights.initializer, biases.initializer])
        weights = tf.get_variable('fc2/weights')
        biases = tf.get_variable('fc2/biases')
        sess.run([weights.initializer, biases.initializer])
        weights = tf.get_variable('fc3/weights')
        biases = tf.get_variable('fc3/biases')
        sess.run([weights.initializer, biases.initializer])

    #Saving params

    W1_run = sess.run(W1)
    W2_run = sess.run(W2)
    save_3D(X_test[0,:,:,:],'input_files/image.in')
    save_4D(W1_run,'input_files/conv1_weights.out')
    save_4D(W2_run,'input_files/conv2_weights.out')

    b1_run = sess.run(b1)
    b2_run = sess.run(b2)
    np.savetxt('input_files/conv1_biases.out',b1_run, fmt = '%.6f', delimiter=' ') 
    np.savetxt('input_files/conv2_biases.out',b2_run, fmt = '%.6f', delimiter=' ') 

    all_vars= tf.global_variables()
    def get_var(name):
        for i in range(len(all_vars)):
            if all_vars[i].name.startswith(name):
                return all_vars[i]
        return None
        
    fc1_weights_tf = get_var('LogReg/fc1/weights')
    fc1_bias_tf = get_var('LogReg/fc1/bias')

    fc2_weights_tf = get_var('LogReg/fc2/weights')
    fc2_bias_tf = get_var('LogReg/fc2/bias')
    
    fc3_weights_tf = get_var('LogReg/fc3/weights')
    fc3_bias_tf = get_var('LogReg/fc3/bias')

    fc1_weights = sess.run(fc1_weights_tf)
    fc1_bias = sess.run(fc1_bias_tf)

    fc2_weights = sess.run(fc2_weights_tf)
    fc2_bias = sess.run(fc2_bias_tf)
        
    fc3_weights = sess.run(fc3_weights_tf)
    fc3_bias = sess.run(fc3_bias_tf)
        
    np.savetxt('input_files/fc1_weights.out',fc1_weights, fmt = '%.6f', delimiter=' ') 
    np.savetxt('input_files/fc1_bias.out',fc1_bias, fmt = '%.6f', delimiter=' ') 
        
    np.savetxt('input_files/fc2_weights.out',fc2_weights, fmt = '%.6f', delimiter=' ') 
    np.savetxt('input_files/fc2_bias.out',fc2_bias, fmt = '%.6f', delimiter=' ') 
        
    np.savetxt('input_files/fc3_weights.out',fc3_weights, fmt = '%.6f', delimiter=' ') 
    np.savetxt('input_files/fc3_bias.out',fc3_bias, fmt = '%.6f', delimiter=' ') 
        
    #Genereting Debug DATA

    conv1_content = A1.eval({X : X_test})
    pool1_content = P1.eval({X : X_test})

    conv2_content = A2.eval({X : X_test})
    pool2_content = P2.eval({X : X_test})

    flatten_content = P2_flatten.eval({X : X_test})

    fc1_content = Z3.eval({X : X_test})
    fc2_content = Z4.eval({X : X_test})
    fc3_content = Z5.eval({X : X_test})

    save_3D(conv1_content[0,:,:,:],'debug/conv_layer1_py.out')
    save_3D(pool1_content[0,:,:,:],'debug/pool_layer1_py.out')
    
    save_3D(conv2_content[0,:,:,:],'debug/conv_layer2_py.out')
    save_3D(pool2_content[0,:,:,:],'debug/pool_layer2_py.out')
    
    np.savetxt('debug/flatten_py.out',flatten_content, fmt = '%.6f', delimiter=' ') 

    np.savetxt('debug/fc_layer1_py.out',fc1_content, fmt = '%.6f', delimiter=' ') 
    np.savetxt('debug/fc_layer2_py.out',fc2_content, fmt = '%.6f', delimiter=' ') 
    np.savetxt('debug/fc_layer3_py.out',fc3_content, fmt = '%.6f', delimiter=' ') 