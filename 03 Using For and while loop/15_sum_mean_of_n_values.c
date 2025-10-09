#include <stdio.h>

int main() {
    int n, i;
    float value, sum = 0, mean;

    // Ask how many values
    printf("Enter how many values: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error: The number of values must be greater than 0.\n");
        return 1;
    }

    printf("Enter %d values:\n", n);

    // Read each value and accumulate the sum
    for (i = 0; i < n; i++) {
        scanf("%f", &value);
        sum += value;
    }

    // Calculate mean
    mean = sum / n;

    // Display results
    printf("\n---------------------------\n");
    printf("Sum  = %.2f\n", sum);
    printf("Mean = %.2f\n", mean);
    printf("---------------------------\n");

    return 0;
}


