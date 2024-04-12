#ifndef FRONT_PROPAGATION_H
#define FRONT_PROPAGATION_H

#include "Vroon.h"              // Include any necessary header files for Layer struct
#include "activation.h" // Include the header file where ActivationFunction is defined

typedef float (*ActivationFunction)(float);

int front_propagation(Layer *layer1, float input, ActivationFunction activation_function);

#endif
