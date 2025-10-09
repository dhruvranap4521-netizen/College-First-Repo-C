#include <stdio.h>
int main() {
    float a, c;
    char degree = 248;

    printf("\t\t\t\t\t=====================================\n");
    printf("\t\t\t\t\t        Fahrenheit to Celcius        \n");
    printf("\t\t\t\t\t=====================================\n\n");

    printf("\tEnter Fahrenheit Tempreture: ");
    scanf("%f", &a);

    c = (5.0 / 9.0) * (a - 32);
    printf("\t    [%.2f%cF = %.2f%cC]\n", a,degree, c,degree);

    return 0;
}
        
