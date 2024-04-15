#include<stdio.h>
#include "activation.h"
#include "layer.h"

typedef float (*ActivationFunction) (float);

float front_propagation(Layer *layer, float input, ActivationFunction activation_function)
{
    float result = input * layer->weight + layer->bias;
    result = activation_function(result);
    return result;
}
