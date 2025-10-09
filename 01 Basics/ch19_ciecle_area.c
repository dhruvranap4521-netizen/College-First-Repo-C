#include <stdio.h>
int main() {
    float a, c;

    printf("Enter radius of a circle(in meter) : ");
    scanf("%f", &a);

    c = 22.0/7.0*a*a;

    printf("Area of circle is %.2fm^2\n",c);

    return 0;
}