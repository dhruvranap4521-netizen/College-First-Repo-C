#include<stdio.h>
void main()
{
    float a,b;
    
    printf("Enter hour =");
    scanf("%f",&a);

    b = a*60;

    printf("%.2f hour = %.2f mintues",a,b);
    

}