#include<stdio.h>

float gradient_descent(float slope, float learning_rate)
{
    slope -= learning_rate * slope;
    return slope;
}