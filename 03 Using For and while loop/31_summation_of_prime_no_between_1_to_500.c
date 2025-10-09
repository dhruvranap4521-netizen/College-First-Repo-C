#include<stdio.h>

int main()
{

    printf("\n-------------------------------------------\n");
    printf("\n         Prime No. between 1 to 500        \n");
    printf("\n-------------------------------------------\n");

    int i, a, b,sum=0;

    // Loop to check each number from 1 to 500
    for (a = 2; a <= 500; a++) {
        b = 0;  // Reset b for each number
        // Check divisibility from 2 to a/2 (optimization)
        for (i = 2; i <= a / 2; i++) {
            if (a % i == 0) {
                b = 1;  // a is divisible by i, so it's not prime
                break;
            }
        }
        // If b is still 0, a is prime
        if (b == 0) {
            sum+=a;
        }
    }
    printf("Sum of prime numbers between 1 and 500 is: %d\n", sum);

    return 0;
}
