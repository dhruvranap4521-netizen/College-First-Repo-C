#include <stdio.h>

int main() {
    int a[5], b[10];  
    int i, j = 0, skip;

    // Input 5 elements
    printf("Enter 5 elements separated by space: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    // Ask which element to skip
    printf("Enter the element you want to skip: ");
    scanf("%d", &skip);

    // Copy elements to b[] except the skipped one
    for (i = 0; i < 5; i++) {
        if (a[i] == skip) {
            continue;   // skip this element
        }
        b[j++] = a[i];
    }

    // Fill remaining elements of b[] with 0
    while (j < 10) {
        b[j++] = 0;
    }

    // Print the final destination array
    printf("\nFinal Destination Array:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
}

