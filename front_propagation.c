#include<stdio.h>
#include "activation.h"
#include "layer.h"

typedef float (*ActivationFunction) (float);

int front_propagation(Layer *layer, float input, ActivationFunction activation_function)
{
    float weighted_sum = ((layer->weight * input) + layer->bias);
    float result = activation_function(weighted_sum);
    return result;
}
