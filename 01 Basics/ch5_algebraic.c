#include<stdio.h>
void main()
{
    int a,b,c,d,e;  
    float f;

    printf("Enter 2 No. = ");
    scanf("%d%d",&a,&b);

    c = a+b;
    printf("The sum of two no   ");
    printf("%d + %d = %d\n", a, b, c);

    d = a-b;
    printf("The subtract of two no   ");
    printf("%d - %d = %d\n", a, b, d);

    e = a*b;
    printf("The multiplication of two no   ");
    printf("%d x %d = %d\n", a, b, e);

    f = (float)a/b;
    printf("The divison of two no   ");
    printf("%d / %d = %.2f\n", a, b, f);

}
