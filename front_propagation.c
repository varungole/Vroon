#include<stdio.h>
#include "activation.h"

float layer_1(float x, float w1 , float b1)
{
      return (x * w1) +b1;
}

float layer_2(float x, float w2, float b2)
{
    return (x * w2) + b2;
}

float layer_3(float x, float w3)
{
    return x * w3;
}

float layer_4(float x, float w4)
{
    return x * w4;
}

float activate_layer(float x, float(*activation_function)(float))
{
       return activation_function(x);
}
