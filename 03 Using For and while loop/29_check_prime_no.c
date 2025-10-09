#include <stdio.h>

int main() 
{

    printf("\n-----------------------------------------\n");
    printf("\n          The Prime No. Finder            \n");
    printf("\n-----------------------------------------\n");


    int a, b = 0, i;

    printf("Alright, what's the magic number you want to check? ");
    scanf("%d", &a);

    if (a <= 1) {
        printf("Not a prime number\n");
        return 0;
    }

    for (i = 2; i <= a / 2; i++) {
        if (a % i == 0) {
            b = 1; // Number is divisible by i, so not prime
            break;
        }
    }

    if (b == 0) {
        printf("%d is a Prime number\n",a);
    } else {
        printf("%d Not a Prime number\n",a);
    }

    return 0;
}
