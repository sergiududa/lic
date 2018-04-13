#!/bin/sh

mkdir input_files
mkdir debug
echo "Downloading MNIST Dataset ..."
python3.5 nnet.py
gcc nnet.c
./a.out
rm a.out
gcc compare.c
./a.out
rm a.out
rm -rf input_files
rm -rf debug
rm -rf MNIST_data
echo "Auxiliar files deleted"