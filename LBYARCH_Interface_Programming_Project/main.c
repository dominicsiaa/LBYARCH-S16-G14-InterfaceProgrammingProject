#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

float c_sdot();
extern float asm_sdot(int n, float a[], float b[]);

void generateRandomFloats(float* array, int n) {
	for (int i = 0; i < n; i++) {
		array[i] = (float)rand() / (float)(RAND_MAX);
	}
}

void calculateExecutionTime(int n) {
    srand((unsigned int)time(NULL));

    float* a, * b;
    a = (float*)malloc(n * sizeof(float));
    b = (float*)malloc(n * sizeof(float));

    generateRandomFloats(a, n);
    generateRandomFloats(b, n);

    double total_time_c = 0.0;
    double total_time_asm = 0.0;
    int correct = 0;

    for (int i = 0; i < 30; i++) {
        clock_t start_c = clock();
        float result_c = c_sdot(n, a, b);
        clock_t end_c = clock();
        total_time_c += ((double)(end_c - start_c)) / CLOCKS_PER_SEC;

        clock_t start_asm = clock();
        float result_asm = asm_sdot(n, a, b);
        clock_t end_asm = clock();
        total_time_asm += ((double)(end_asm - start_asm)) / CLOCKS_PER_SEC;
    }

    double avg_time_c = total_time_c / 30.0;
    double avg_time_asm = total_time_asm / 30.0;

    printf("EXECUTION TIME MEASUREMENT\n");
    printf("Average time taken by C version for 30 times: %f s\n", avg_time_c);
    printf("Average time taken by x86-64 Assembly version for 30 times: %f s\n\n", avg_time_asm);

    printf("CORRECTNESS CHECK\n");
    float result_c = c_sdot(n, a, b);
    float result_asm = asm_sdot(n, a, b);
    printf("sdot = %f\n", result_c);
    if (result_c == result_asm) {
        printf("The x86-64 kernel output is correct\n\n");
    }
    else {
        printf("The x86-64 kernel output is incorrect\n");
    }

    free(a);
    free(b);
}

int main() {
    int n = 0;

    printf("n = 2^20\n");
    n = 1 << 20;
    calculateExecutionTime(n);

    printf("--------------------------------------------------\n\n");

    printf("n = 2^24\n");
    n = 1 << 24;
    calculateExecutionTime(n);

    printf("--------------------------------------------------\n\n");

    printf("n = 2^28\n");
    n = 1 << 28;
    calculateExecutionTime(n);

    return 0;
}

// Reference: https://stackoverflow.com/questions/5248915/execution-time-of-c-program