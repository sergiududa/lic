from tensorflow.examples.tutorials.mnist import input_data
import numpy as np
import tensorflow as tf
import math
from sklearn.utils import shuffle
from scipy.io import savemat
from tensorflow.python.framework import ops


#Loading Mnist Dataset
mnist = input_data.read_data_sets("MNIST_data", one_hot = True, reshape=False)

#Train set
X_train, y_train = mnist.train.images, mnist.train.labels

#Dev set
X_dev, y_dev     = mnist.validation.images, mnist.validation.labels

# Test set
X_test, y_test   = mnist.test.images, mnist.test.labels

X_save = X_train[0,:,:,:]
y_save = y_train[0,:]

#Checks to ensure correct data sizes
assert(len(X_train) == len(y_train))
assert(len(X_dev)   == len(y_dev))
assert(len(X_test)  == len(y_test))

#Lenet-5 arhitecture uses 32x32 resolution pictures
#Mnist set has a resolution on 28X28


X_train = np.pad(X_train, ((0,0),(2,2),(2,2),(0,0)), 'constant')
X_dev   = np.pad(X_dev, ((0,0),(2,2),(2,2),(0,0)), 'constant')
X_test  = np.pad(X_test, ((0,0),(2,2),(2,2),(0,0)), 'constant')

X_train, y_train = shuffle(X_train,y_train)


def save_W1(W1):
    W1_numpy = np.empty((0), dtype = float)
    for i in range (0,8):    
        aux = W1[: , : , 0 , i]
        aux = np.reshape(aux,(4,4))
        W1_numpy = np.append(W1_numpy,aux)
    np.savetxt('/output/conv1_weights.out',W1_numpy, fmt = '%.6f', delimiter=' ') 


def save_W2(W2):
    # 2 2 8 16
    W2_numpy = np.empty((0), dtype = float)
    for i in range (0,16): # each filter
        for j in range (0,8):    #each channel
            aux = W2[: , : , j , i] # w/e
            aux = np.reshape(aux,(2,2))
            W2_numpy = np.append(W2_numpy,aux)
    np.savetxt('/output/conv2_weights.out',W2_numpy, fmt = '%.6f', delimiter=' ') 

def save_image(W1):
    W1_numpy = np.empty((0), dtype = float)
    
    aux = W1[ : ,: , 0 ]
    W1_numpy = np.append(W1_numpy,aux)
        
    np.savetxt('/output/image.in',W1_numpy,fmt = '%.6f', delimiter=' ') 

def create_placeholders(n_H0, n_W0, n_C0, n_y):
    """
    Creates the placeholders for the tensorflow session.
    
    Arguments:
    n_H0 -- scalar, height of an input image
    n_W0 -- scalar, width of an input image
    n_C0 -- scalar, number of channels of the input
    n_y -- scalar, number of classes
        
    Returns:
    X -- placeholder for the data input, of shape [None, n_H0, n_W0, n_C0] and dtype "float"
    Y -- placeholder for the input labels, of shape [None, n_y] and dtype "float"
    """

    X = tf.placeholder(tf.float32, (None, n_H0, n_W0, n_C0))
    Y = tf.placeholder(tf.float32, (None, n_y))
    
    return X, Y

def initialize_parameters():
    """
    Initializes weight parameters to build a neural network with tensorflow. The shapes are:
                        W1 : [4, 4, 1, 8]
                        W2 : [2, 2, 8, 16]
    Returns:
    parameters -- a dictionary of tensors containing W1, W2
    """
    
    tf.set_random_seed(1)                              # so that your "random" numbers match ours
        
    W1 =  tf.get_variable("W1", [4,4,1,8], initializer = tf.contrib.layers.xavier_initializer(seed = 0))
    W2 =  tf.get_variable("W2", [2,2,8,16], initializer = tf.contrib.layers.xavier_initializer(seed = 0))

    b1 =  tf.get_variable("b1", [8], initializer = tf.contrib.layers.xavier_initializer(seed = 0))
    b2 =  tf.get_variable("b2", [16], initializer = tf.contrib.layers.xavier_initializer(seed = 0))
   


    parameters = {"W1": W1,
                  "W2": W2,#}
                  "b1": b1,
                  "b2": b2}
    
    return parameters


def random_mini_batches(X, Y, mini_batch_size = 64, seed = 0):
    """
    Creates a list of random minibatches from (X, Y)
    
    Arguments:
    X -- input data, of shape (input size, number of examples)
    Y -- true "label" vector (1 for blue dot / 0 for red dot), of shape (1, number of examples)
    mini_batch_size -- size of the mini-batches, integer
    
    Returns:
    mini_batches -- list of synchronous (mini_batch_X, mini_batch_Y)
    """
    
    np.random.seed(seed)            # To make your "random" minibatches the same as ours
    m = X.shape[1]                  # number of training examples
    mini_batches = []
        
    # Step 1: Shuffle (X, Y)

    shuffled_X = shuffle(X, random_state = seed)
    shuffled_Y = shuffle(Y, random_state = seed)

    # Step 2: Partition (shuffled_X, shuffled_Y). Minus the end case.
    num_complete_minibatches = math.floor(m/mini_batch_size) # number of mini batches of size mini_batch_size in your partitionning
    for k in range(0, num_complete_minibatches):

        mini_batch_X = shufpytfled_X[:,  mini_batch_size * k: mini_batch_size* (k+1)]
        mini_batch_Y = shuffled_Y[:,  mini_batch_size * k: mini_batch_size* (k+1)]

        mini_batch = (mini_batch_X, mini_batch_Y)
        mini_batches.append(mini_batch)
    
    # Handling the end case (last mini-batch < mini_batch_size)
    if m % mini_batch_size != 0:

        mini_batch_X = shuffled_X[:,  mini_batch_size * num_complete_minibatches: m]
        mini_batch_Y = shuffled_Y[:,  mini_batch_size * num_complete_minibatches: m]

        mini_batch = (mini_batch_X, mini_batch_Y)
        mini_batches.append(mini_batch)
    
    return mini_batches



def forward_propagation(X, parameters):
    
    conv_filters = { "conv1_s" : 1,
                     "conv2_s" : 1}

    pool_filters = { "pool1_s" : 2,
                     "pool1_f" : 2,
                     "pool2_s" : 2,
                     "pool2_f" : 2}

    W1 = parameters["W1"]
    W2 = parameters["W2"]
    
    b1 = parameters["b1"]
    b2 = parameters["b2"]
    
    #CONV1

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
    P2 = tf.contrib.layers.flatten(P2)

    with tf.variable_scope("LogReg"):
        Z3 = tf.contrib.layers.fully_connected(P2, 120, activation_fn = tf.nn.relu, scope = 'fc1')
        Z4 = tf.contrib.layers.fully_connected(Z3, 84, activation_fn = tf.nn.relu, scope = 'fc2')
        Z5 = tf.contrib.layers.fully_connected(Z4, 10, activation_fn = None, scope = 'fc3')
   
    '''
    #Fully connected 1
    Z3 = tf.add(tf.matmul(P2,W3), b3)
    A3 = tf.nn.relu(Z3)

    #Fully connected 2
    Z4 = tf.add(tf.matmul(A3,W4), b4)
    A4 = tf.nn.relu(Z4)

    #Fully connected 3
    Z5 = tf.add(tf.matmul(A4,W5), b5)
    '''

    return Z5   


def compute_cost(Z3, Y):
    """
    Computes the cost
    
    Arguments:
    Z3 -- output of forward propagation (output of the last LINEAR unit), of shape (6, number of examples)
    Y -- "true" labels vector placeholder, same shape as Z3
    
    Returns:
    cost - Tensor of the cost function
    """
    
    cost = tf.reduce_mean(tf.nn.softmax_cross_entropy_with_logits(logits = Z3, labels = Y))
    
    return cost

def model(X_train, Y_train, X_test, Y_test, learning_rate = 0.009,
          num_epochs = 100, minibatch_size = 64, print_cost = True):
    """
    Implements a three-layer ConvNet in Tensorflow:
    CONV2D -> RELU -> MAXPOOL -> CONV2D -> RELU -> MAXPOOL -> FLATTEN -> FULLYCONNECTED
    
    Arguments:
    X_train -- training set, of shape (None, 64, 64, 3)
    Y_train -- test set, of shape (None, n_y = 6)
    X_test -- training set, of shape (None, 64, 64, 3)
    Y_te-st -- test set, of shape (None, n_y = 6)
    learning_rate -- learning rate of the optimization
    num_epochs -- number of epochs of the optimization loop
    minibatch_size -- size of a minibatch
    -print_cost -- True to print the cost every 100 epochs
    
    Returns:
    train_accuracy -- real number, accuracy on the train set (X_train)
    test_accuracy -- real number, testing accuracy on the test set (X_test)
    parameters -- parameters learnt by the model. They can then be used to predict.
    """
    
    ops.reset_default_graph()                         # to be able to rerun the model without overwriting tf variables
    tf.set_random_seed(1)                             # to keep results consistent (tensorflow seed)
    seed = 3                                          # to keep results consistent (numpy seed)
    (m, n_H0, n_W0, n_C0) = X_train.shape             
    n_y = Y_train.shape[1]                            
    costs = []                                        # To keep track of the cost
    
    # Create Placeholders of the correct shape
    X, Y = create_placeholders(n_H0, n_W0, n_C0, n_y);

    # Initialize parameters
    parameters = initialize_parameters();
    
    # Forward propagation: Build the forward propagation in the tensorflow graph
    Z3 = forward_propagation(X, parameters);
    
    # Cost function: Add cost function to tensorflow graph
    cost = compute_cost(Z3, Y);
    
    # Backpropagation: Define the tensorflow optimizer. Use an AdamOptimizer that minimizes the cost.
    optimizer = tf.train.AdamOptimizer(learning_rate).minimize(cost);
    
    # Initialize all the variables globally
    init = tf.global_variables_initializer()
     
    # Start the session to compute the tensorflow graph
    with tf.Session() as sess:
        
        # Run the initialization
        sess.run(init)
        
        # Do the training loop
        for epoch in range(num_epochs):
            print ("##################################")
            print ("Starting epoch %i ..."  % (epoch))
            

            minibatch_cost = 0.
            num_minibatches = int(m / minibatch_size) # number of minibatches of size minibatch_size in the train set
            seed = seed + 1
            minibatches = random_mini_batches(X_train, Y_train, minibatch_size, seed)

            for minibatch in minibatches:

                # Select a minibatch
                (minibatch_X, minibatch_Y) = minibatch
                # IMPORTANT: The line that runs the graph on a minibatch.
                # Run the session to execute the optimizer and the cost, the feedict should contain a minibatch for (X,Y).
                _ , temp_cost =  sess.run([optimizer,cost], feed_dict = {X: minibatch_X, Y: minibatch_Y})
                           
                minibatch_cost += temp_cost / num_minibatches
                

            # Print the cost every epoch
            if print_cost == True and epoch % 5 == 0:
                print ("Cost after epoch %i: %f" % (epoch, minibatch_cost))
            if print_cost == True and epoch % 1 == 0:
                costs.append(minibatch_cost)
            
            print ("After epoch %i:" % (epoch))

             # Calculate the correct predictions
            predict_op = tf.argmax(Z3, 1)
            correct_prediction = tf.equal(predict_op, tf.argmax(Y, 1))
       
            accuracy = tf.reduce_mean(tf.cast(correct_prediction, "float"))
            #print(accuracy)
            train_accuracy = accuracy.eval({X: X_train, Y: Y_train})
            test_accuracy = accuracy.eval({X: X_test, Y: Y_test})
            print("Train Accuracy:", train_accuracy)
            print("Test Accuracy:", test_accuracy)
        
        '''
        # Calculate the correct predictions
        predict_op = tf.argmax(Z3, 1)
        correct_prediction = tf.equal(predict_op, tf.argmax(Y, 1))
        
        # Calculate accuracy on the test set
        accuracy = tf.reduce_mean(tf.cast(correct_prediction, "float"))
        #print(accuracy)
        train_accuracy = accuracy.eval({X: X_train, Y: Y_train})
        test_accuracy = accuracy.eval({X: X_test, Y: Y_test})
        print("Train Accuracy:", train_accuracy)
        print("Test Accuracy:", test_accuracy)
        '''        

        '''
        a = parameters["W1"].eval()
        b = a[:,:,:1,:1]
        b = np.reshape(b,(4,4))
        #print (b.shape)
        np.savetxt('/output/test.out',b, delimiter=',') 
        '''     
        save_W1(parameters["W1"].eval())
        save_W2(parameters["W2"].eval())
        save_image(X_save)
        np.savetxt('/output/nn_output.out',y_save, fmt = '%.6f', delimiter=' ')  
        np.savetxt('/output/conv1_biases.out',parameters["b1"].eval(), fmt = '%.6f', delimiter=' ') 
        np.savetxt('/output/conv2_biases.out',parameters["b2"].eval(), fmt = '%.6f', delimiter=' ') 
                

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
        
        np.savetxt('/output/fc1_weights.out',fc1_weights, fmt = '%.6f', delimiter=' ') 
        np.savetxt('/output/fc1_bias.out',fc1_bias, fmt = '%.6f', delimiter=' ') 
        
        np.savetxt('/output/fc2_weights.out',fc2_weights, fmt = '%.6f', delimiter=' ') 
        np.savetxt('/output/fc2_bias.out',fc2_bias, fmt = '%.6f', delimiter=' ') 
        
        np.savetxt('/output/fc3_weights.out',fc3_weights, fmt = '%.6f', delimiter=' ') 
        np.savetxt('/output/fc3_bias.out',fc3_bias, fmt = '%.6f', delimiter=' ') 
        

        return train_accuracy, test_accuracy, parameters


_, _, parameters = model(X_train, y_train, X_test, y_test, num_epochs = 10)
