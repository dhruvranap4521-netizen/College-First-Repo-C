#include <stdio.h>

int main() {
    char sex;
    int boys = 0, girls = 0;

    printf("Enter the sex of 10 students (M/F):\n");

    for (int i = 1; i <= 10; i++) {
        printf("Student %d: ", i);
        scanf(" %c", &sex); // space before %c skips any leftover newline

        if (sex == 'M' || sex == 'm') {
            boys++; // increment boys count
        } else if (sex == 'F' || sex == 'f') {
            girls++; // increment girls count
        } else {
            printf("Invalid input! Please enter M or F.\n");
            i--; // repeat this iteration for valid input
        }
    }

    printf("\nTotal boys: %d\n", boys);
    printf("Total girls: %d\n", girls);

    return 0;
}
