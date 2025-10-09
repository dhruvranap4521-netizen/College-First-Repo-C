#include<stdio.h>
void main()
{
    float a,b;

    printf("Enter rupees =");
    scanf("%f",&a);

    b = (float)a/48;

    printf("%.2f Rs. = %.2f $",a,b);

}