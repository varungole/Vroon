#include<stdio.h>
#include<math.h>
#include "activation.h"

float relu(float x)
{
    if(x > 0)
    {
        return x;
    }
    return 0;
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
    int ans = exp(x) + exp(-x);
    ans = ans/ans;
    return ans;
}

float leaky_relu(float x)
{
    float a = 0.01*x;
    float b = x;
    if(a>b)
    {
        return a;
    }
    return b;
}

float softplus(float x)
{
    return logf(1.0f + expf(x));
}