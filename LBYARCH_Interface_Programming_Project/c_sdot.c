#include <stdio.h>
float c_sdot(int n, float x[], float y[]) {
    float sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += x[i] * y[i];
    }
    return sum;
}