#include <stdio.h>

int main() {
    int a[100], i, size, n, p;

    printf("How many elements are currently in the array (up to 100)? ");
    scanf("%d", &size);

    if (size > 100 || size < 0) {
        printf("Invalid size!");
        return 0;
    }

    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    printf("At which position do you want to insert the number (1 to %d)? ", size + 1);
    scanf("%d", &p);

    if (p < 1 || p > size + 1) {  
        printf("Invalid position!");
        return 0;
    }

    printf("Enter the number you want to insert at position %d: ", p);
    scanf("%d", &n);

    // Shift elements to the right
    for (i = size; i >= p; i--) {
        a[i] = a[i - 1];
    }

    a[p - 1] = n; // insert number

    printf("\nFinal array: ");
    for (i = 0; i < size + 1; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
