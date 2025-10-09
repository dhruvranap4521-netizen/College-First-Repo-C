#include <stdio.h>

void main() {
    int i, j, k;
    int a[2][2], b[2][2], c[2][2];

    printf("=====================================\n");
    printf("       MATRIX MULTIPLICATION (2x2)   \n");
    printf("=====================================\n\n");

    printf("Enter elements of 1st Matrix (2x2):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("A[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of 2nd Matrix (2x2):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("B[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    // Matrix multiplication
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            c[i][j] = 0;
            for (k = 0; k < 2; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\n-------------------------------------\n");
    printf("   1st Matrix (A):\n");
    for (i = 0; i < 2; i++) {
        printf("   ");
        for (j = 0; j < 2; j++) {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

    printf("\n   2nd Matrix (B):\n");
    for (i = 0; i < 2; i++) {
        printf("   ");
        for (j = 0; j < 2; j++) {
            printf("%4d", b[i][j]);
        }
        printf("\n");
    }

    printf("\n-------------------------------------\n");
    printf("   Resultant Matrix (C = A * B):\n");
    for (i = 0; i < 2; i++) {
        printf("   ");
        for (j = 0; j < 2; j++) {
            printf("%4d", c[i][j]);
        }
        printf("\n");
    }
}
