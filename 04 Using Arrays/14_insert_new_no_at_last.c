#include <stdio.h>

int main() {
    int a[100], i, size, n, p;

    printf("Fix your array size (max 100): ");
    scanf("%d", &size);

    if (size > 100 || size <= 0) {
        printf("Invalid size!\n");
        return 0;
    }

    printf("How many numbers do you want to add currently in array: ");
    scanf("%d", &n);

    if (n > size) {
        printf("You cannot insert more than %d elements.\n", size);
        return 0;
    }

    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    while (1) {
        printf("\nHow many numbers do you want to add at the end (press 0 to stop): ");
        scanf("%d", &p);

        if (p == 0) {
            printf("\nNo more numbers to add.\n");
            break;
        }

        if (n + p > size) {
            printf("Cannot add %d numbers. It exceeds fixed size (%d).\n", p, size);
            continue;
        }

        printf("Enter %d numbers: ", p);
        for (i = n; i < n + p; i++) {
            scanf("%d", &a[i]);
        }

        n += p; // update current array length

        printf("Updated array: ");
        for (i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }

    printf("\nFinal array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
