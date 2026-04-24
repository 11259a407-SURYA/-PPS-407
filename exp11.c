#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, r1, r2, real, imag;

    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("Not a quadratic equation.\n");
        return 0;
    }

    d = b * b - 4 * a * c;

    if (d > 0) {
        // Two real roots
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);

        printf("Roots are real and different:\n");
        printf("Root1 = %.2f\nRoot2 = %.2f\n", r1, r2);

    } 
    else if (d == 0) {
        // Equal roots
        r1 = r2 = -b / (2 * a);

        printf("Roots are real and equal:\n");
        printf("Root1 = Root2 = %.2f\n", r1);

    } 
    else {
        // Complex roots
        real = -b / (2 * a);
        imag = sqrt(-d) / (2 * a);

        printf("Roots are complex:\n");
        printf("Root1 = %.2f + %.2fi\n", real, imag);
        printf("Root2 = %.2f - %.2fi\n", real, imag);
    }

    return 0;
}