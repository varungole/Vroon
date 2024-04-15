#include "Vroon.h"

int main()
{

     float input = 0.5;

     Layer layer1;
     layer1.weight = 1;
     layer1.bias = 1;
      
     float result = front_propagation(&layer1, input, identity);

     printf("%f\n" , result);
     
     return 0;
}