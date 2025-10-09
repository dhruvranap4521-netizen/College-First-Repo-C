#include <stdio.h>
int main() {
    float a,b, c,d;

    printf("Enter length of a rectangle(in meter) : ");
    scanf("%f", &a);

    printf("Enter width of a rectangle(in meter) : ");
    scanf("%f", &b);

    c = a*b;
    d = 2*(a+b);

    printf("Area of rectangle is %.2fm^2\n",c);
    printf("Perimeter of rectangle is %.2fm",d);

    return 0;
}
