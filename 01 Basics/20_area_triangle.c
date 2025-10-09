#include <stdio.h>
int main() {
    float a, c,d;

    printf("Enter length of a triangle(in meter) : ");
    scanf("%f", &a);

    printf("Enter height of a triangle(in meter) : ");
    scanf("%f", &c);

    d=a*c/2.0;

    printf("Area of triangle is %.2fm^2\n",d);

    return 0;
}
