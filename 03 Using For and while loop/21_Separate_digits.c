#include <stdio.h>

int main() {
    int num, digit,i;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i=0;num>0;i++){
        digit = num % 10;
        printf("%d, ", digit);
        num = num / 10;
    }

    return 0;
}
