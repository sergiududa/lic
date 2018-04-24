# 1 "/home/sergiu/git/lic/hls/workspace/test_conv2d/solution1/conv.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/home/sergiu/git/lic/hls/workspace/test_conv2d/solution1/conv.c"
float relu(float a)
{
 return a > 0 ? a : 0;
}


void conv2d(float output[29][29][8], float image[32][32][1], float weight[4][4][1][8], float bias[8])
{

 int i,j,k,filter;
 float sum;
 int h = 32, w = 32, c = 1;
 int number_of_filters = 8, f = 4;
 int stride = 1;
 int row_offset, col_offset, channel_offset;


 for(filter = 0; filter < number_of_filters; filter++)
 {

  for(i = 0; i < (h - f + 1); i += stride)
   for(j = 0; j < (w - f + 1); j += stride)
   {

    sum = 0;
    for(row_offset = 0; row_offset <f; row_offset++)
     for(col_offset = 0; col_offset <f; col_offset++)
      for(channel_offset = 0; channel_offset < c; channel_offset++)
       sum += image[i + row_offset][j + col_offset][channel_offset] * weight[row_offset][col_offset][channel_offset][filter];
    output[i/stride][j/stride][filter] = relu(sum + bias[filter]);
   }
 }
}
