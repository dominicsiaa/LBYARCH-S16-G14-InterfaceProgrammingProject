#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

extern float asm_sdot(int n, float x[], float y[]);

int main() {
	int n = 20;
	float x[20] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0, 12.0, 13.0, 14.0, 15.0, 16.0, 17.0, 18.0, 19.0, 20.0 };
	float y[20] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0, 12.0, 13.0, 14.0, 15.0, 16.0, 17.0, 18.0, 19.0, 20.0 };
	float result = asm_sdot(n, x, y);
	printf("Result: %f\n", result);
	return 0;
}

/*
- Set up github
- 30 times repeat
- Different vector sizes (same/random values)
- Measure average time
- Sanity check, compare results of x86 and C should be same "the x86-64 kernel output is correct"
- Github README:
	i.) comparative execution time and short analysis of the performance of the kernels
	ii.) Take a screenshot of the program output with the correctness check (C).
	iii.) Take a screenshot of the program output, including the correctness check (x86-64).

*/