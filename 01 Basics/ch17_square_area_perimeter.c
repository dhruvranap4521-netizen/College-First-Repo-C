#include <stdio.h>
int main() {
    float a, c,d;

    printf("Enter length of a square(in meter) : ");
    scanf("%f", &a);

    c = a*a;
    d = 4*a;

    printf("Area of %.2fm square is %.2fm^2\n",a,c);
    printf("Perimeter of %.2fm square is %.2fm",a,d);

    return 0;
}