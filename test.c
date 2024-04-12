#include "Vroon.h"

int main()
{

     float input = 0.5;

     Layer layer1;
     layer1.weight = 1;
     layer1.bias = 1;

     Layer layer2;
     layer2.weight = 1;
     layer2.bias = 1;

     float result_1 = layer1.weight*input + layer1.bias;

     float result_2 = sigmoid(result_1);

     printf("%f", result_2);
     
     return 0;
}