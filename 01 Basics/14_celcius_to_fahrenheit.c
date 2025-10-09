#include <stdio.h>
int main() {
    float a, c;
    char degree = 248;

    printf("Enter Celsius: ");
    scanf("%f", &a);

    c = (9.0 / 5.0) * a + 32;
    printf("%.2f%cC = %.2f%cF\n", a,degree, c,degree);

    return 0;
}
