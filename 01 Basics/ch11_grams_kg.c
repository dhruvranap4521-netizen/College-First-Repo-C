#include<stdio.h>
void main()
{
    float a,b;

    printf("Enter grams =");
    scanf("%f",&a);

    b = (float)a/1000;
    printf("%.2f gm = %.2f kg\n",a,b);

}

