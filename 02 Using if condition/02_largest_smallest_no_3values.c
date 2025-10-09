#include <stdio.h>

int main() {
    int a, b, c;

    // Input three numbers
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    // Check if all numbers are equal
    if (a == b && b == c) {
        printf("\nAll three numbers are equal: %d\n", a);
    } else {
        // Find largest
        int largest = a;
        if (b > largest)
            largest = b;
        if (c > largest)
            largest = c;

        // Find smallest
        int smallest = a;
        if (b < smallest)
            smallest = b;
        if (c < smallest)
            smallest = c;

        // Output results
        printf("\nLargest  : %d\n", largest);
        printf("Smallest : %d\n", smallest);
    }

    return 0;
}

