#include<stdio.h>
#include<math.h>
#include "activation.h"

float relu(float x)
{
    return (x > 0 ? x : 0);
}

float identity(float x)
{
    return x;
}

float sigmoid(float x)
{
    return 1/1+(exp(-x));
}

float tan_h(float x)
{
    float epx = exp(x);
    float enx = exp(-x);
    return (epx - enx) / (epx + enx);
}

float leaky_relu(float x)
{
   return (x > 0 ?  x : 0.01 * x);
}

float softplus(float x)
{
    return logf(1.0f + expf(x));
}