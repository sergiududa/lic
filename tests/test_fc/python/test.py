import tensorflow as tf
import numpy as np 

tf.set_random_seed(1)                              # so that your "random" numbers match ours

P =  tf.get_variable("P", [1,50], initializer = tf.contrib.layers.xavier_initializer(seed = 0))

init = tf.global_variables_initializer()
    
with tf.variable_scope("LogReg"):
    Z = tf.contrib.layers.fully_connected(P, 20, activation_fn = tf.nn.relu, scope = 'fc1')



with tf.Session() as sess:

    sess.run(init)
    with tf.variable_scope('LogReg', reuse=True):
        weights = tf.get_variable('fc1/weights')
        biases = tf.get_variable('fc1/biases')
        sess.run([weights.initializer, biases.initializer])

        Z_np = sess.run(Z)
        P_np = sess.run(P)
        all_vars= tf.global_variables()
        def get_var(name):
            for i in range(len(all_vars)):
                if all_vars[i].name.startswith(name):
                    return all_vars[i]
            return None
        
        fc1_weights_tf = get_var('LogReg/fc1/weights')
        fc1_bias_tf = get_var('LogReg/fc1/bias')

        fc1_weights = sess.run(fc1_weights_tf)
        fc1_bias = sess.run(fc1_bias_tf)


        np.savetxt('fc1_weights.out',fc1_weights, fmt = '%.6f', delimiter=' ') 
        np.savetxt('fc1_bias.out',fc1_bias, fmt = '%.6f', delimiter=' ') 
        np.savetxt('output.out',Z_np, fmt = '%.6f', delimiter=' ') 
        np.savetxt('input.out',P_np, fmt = '%.6f', delimiter=' ') 
    