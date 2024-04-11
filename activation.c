#include<stdio.h>
#include<math.h>

int relu(int x)
{
    if(x > 0)
    {
        return x;
    }
    return 0;
}

int identity(int x)
{
    return x;
}

int sigmoid(int x)
{
    return 1/1+(exp(-x));
}

int tan_h(int x)
{
    int ans = exp(x) + exp(-x);
    ans /= ans;
    return ans;
}

int leaky_relu(int x)
{
    int a = 0.01*x;
    int b = x;
    if(a>b)
    {
        return a;
    }
    return b;
}

double softplus(double x)
{
    return log(1 + exp(x));
}

int main()
{  
    return 0;
}