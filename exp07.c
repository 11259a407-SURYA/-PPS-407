#include <stdio.h>

int main() {
    int a[10][10], b[10][10], result[10][10];
    int r1, c1, r2, c2;
    int i, j, k;

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);

    // Input validation for multiplication
    if (r1 != r2 || c1 != c2) {
        printf("For addition and subtraction, matrices must have same size.\n");
        printf("For multiplication, columns of A must equal rows of B.\n");
    }

    printf("Enter elements of Matrix A:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of Matrix B:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // ➤ Addition
    printf("\nMatrix Addition:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            result[i][j] = a[i][j] + b[i][j];
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    // ➤ Subtraction
    printf("\nMatrix Subtraction:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            result[i][j] = a[i][j] - b[i][j];
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    // ➤ Multiplication
    printf("\nMatrix Multiplication:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}