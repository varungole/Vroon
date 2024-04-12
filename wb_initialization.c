#include <stdio.h>

void zero_wb(float *w, float *b) {
    *w = 0;
    *b = 0;
}

void one_wb(float *w, float *b) {
    *w = 1;
    *b = 1;
}

int main() {
    float weight, bias;

    // Test zero initialization
    zero_wb(&weight, &bias);
    printf("Zero Init - Weight: %f, Bias: %f\n", weight, bias);

    // Test one initialization
    one_wb(&weight, &bias);
    printf("One Init - Weight: %f, Bias: %f\n", weight, bias);

    return 0;
}
