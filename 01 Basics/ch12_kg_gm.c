#include<stdio.h>
void main()
{
    float a,b;

    printf("Enter kilograms =");
    scanf("%f",&a);

    b = a*1000;
    printf("%.2f kg = %.2f gm\n",a,b);

}
