#include <stdio.h>

int main() {
    int a[100], size, n, i;

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

    printf("How many new numbers do you want to add at the beginning? ");
    scanf("%d", &n);

    if (size + n > 100) {
        printf("Not enough space in array!");
        return 0;
    }

    // Shift old elements to the right
    for (i = size - 1; i >= 0; i--) {
        a[i + n] = a[i];
    }

    // Input new elements at the start
    printf("Enter %d new numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    size += n;

    printf("\nFinal array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}


