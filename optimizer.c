#include<stdio.h>

float update_parameter(float param, float grad, float learning_rate)
{
    param -= learning_rate * grad;
    return param;
}
