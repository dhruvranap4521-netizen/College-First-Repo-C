#include <stdio.h>

void main() {
    int i, j;
    int a[4][4];

    printf("=====================================\n");
    printf("      TRANSPOSE OF A MATRIX (4x4)    \n");
    printf("=====================================\n\n");

    printf("Enter elements of Matrix (4x4):\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("A[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n-------------------------------------\n");
    printf("     Matrix (A) :\n");
    for (i = 0; i < 4; i++) {
        printf("   ");
        for (j = 0; j < 4; j++) {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

    printf("\n-------------------------------------\n");
    printf("   Transpose Matrix (A):\n");
    for (i = 0; i < 4; i++) {
        printf("   ");
        for (j = 0; j < 4; j++) {
            printf("%4d", a[j][i]);
        }
        printf("\n");
    }
}
