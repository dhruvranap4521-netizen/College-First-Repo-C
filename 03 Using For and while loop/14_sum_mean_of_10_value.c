#include <stdio.h>

int main() {
    int i;
    float values, sum = 0, mean;

    printf("Enter 10 values separated by spaces:\n");

    // Read 10 values in one line
    for (i = 0; i < 10; i++) {
        scanf("%f", &values);
        sum += values;
    }

    // Calculate mean
    mean = sum / 10;

    // Display results
    printf("\n---------------------------\n");
    printf("Sum  = %.2f\n", sum);
    printf("Mean = %.2f\n", mean);
    printf("---------------------------\n");

    return 0;
}

