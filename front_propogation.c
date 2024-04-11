#include<stdio.h>
#include "activation.h"

int layer_math(int x, int w , int b)
{
      return x * w +b;
}

int activate_layer(int x, int(*activation_function)(int))
{
       return activation_function(x);
}

int main()
{
    int x = 0;
    int w = -34;
    int b = 2;
    int res1 = layer_math(x, w, b);
    int res2 = activate_layer(res1, relu(res1));
    printf("%d", res2);
}