#include <stdio.h>

int main() {
    int a[100], size, i, value, found = 0;

    printf("Enter number of elements (up to 100): ");
    scanf("%d", &size);

    if (size > 100 || size < 0) {
        printf("Invalid size!");
        return 0;
    }

    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    printf("\nEnter value to search: ");
    scanf("%d", &value);

    for (i = 0; i < size; i++) {
        if (a[i] == value) {
            printf("Value %d found at position %d (index %d)\n", value, i + 1, i);
            found = 1;
            break; // stop searching after first match
        }
    }

    if (!found) {
        printf("Value %d not found in the array.\n", value);
    }

    return 0;
}
