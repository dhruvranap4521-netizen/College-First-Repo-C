#include<stdio.h>
void main()
{
    float a,b;

    printf("Enter mintues=");
    scanf("%f",&a);

    b = (float)a/60;

    printf("%.2f mintues = %.2f hour",a,b);


}
