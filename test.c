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
      
     float result = front_propagation(&layer1, input, relu);

     printf("%f", result);
     
     return 0;
}