#include <stdio.h>
#include <math.h>

int main() {
    float A, B, C, result;

    printf("Enter values of A, B, and C: ");
    scanf("%f %f %f", &A, &B, &C);

    result = A + B + (2 * C) / (3 * A) + pow(A, 2) + 2 * B;

    printf("Result = %.2f\n", result);

    return 0;
}