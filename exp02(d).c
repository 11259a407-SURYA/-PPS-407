#include <stdio.h>
#include <math.h>

int main() {
    double x, y, z, result;

    printf("Enter values of x, y, z: ");
    scanf("%lf %lf %lf", &x, &y, &z);

    result = log(pow(x, 3) + pow(y, 3) + pow(z, 3));

    printf("Result = %.4lf\n", result);

    return 0;
}