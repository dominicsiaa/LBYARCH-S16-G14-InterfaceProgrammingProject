#include <stdio.h>
float c_sdot(int n, float a[], float b[]) {
    float sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += a[i] * b[i];
    }
    return sum;
}