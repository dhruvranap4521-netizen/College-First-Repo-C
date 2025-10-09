#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Compare and find largest & smallest
    if (a > b) {
        printf("\nLargest : %d\n", a);
        printf("Smallest: %d\n", b);
    } 
    else if (b > a) {
        printf("\nLargest : %d\n", b);
        printf("Smallest: %d\n", a);
    } 
    else {
        printf("\nBoth numbers are equal: %d\n", a);
    }

    return 0;
}

