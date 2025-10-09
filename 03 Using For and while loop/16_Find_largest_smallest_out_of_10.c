#include <stdio.h>

int main() {
    int i, num;
    int largest, smallest;

    printf("Enter 10 values separated by spaces:\n");

    // Read the first number to initialize largest and smallest
    scanf("%d", &num);
    largest = num;
    smallest = num;

    // Loop for remaining 9 numbers
    for (i = 2; i <= 10; i++) {
        scanf("%d", &num);

        if (num > largest) {
            largest = num;
        }
        if (num < smallest) {
            smallest = num;
        }
    }

    printf("Largest number = %d\n", largest);
    printf("Smallest number = %d\n", smallest);

    return 0;
}
