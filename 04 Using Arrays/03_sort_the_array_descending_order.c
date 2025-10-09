#include <stdio.h>

int main() {
    int i, j, q;
    int a[5];

    printf("============================\n");
    printf("        Bubble Sort         \n");
    printf("============================\n\n");


    printf("Enter five values separated by spaces: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    for (q = 0; q < 4; q++) {
        for (i = 0; i < 4 - q; i++) {
            if (a[i] > a[i + 1]) {
                j = a[i];
                a[i] = a[i + 1];
                a[i + 1] = j;
            }
        }
    }

    printf("\n------------------------------------------------\n");
    printf("Sorted in Descending Order : ");
    
    for (j = 0; j < 5; j++) {
        printf("%d  ", a[j]);
    }

    printf("\n------------------------------------------------\n");

    return 0;
}
