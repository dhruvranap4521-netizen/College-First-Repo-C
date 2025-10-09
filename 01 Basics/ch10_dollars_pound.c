#include<stdio.h>
void main()
{
    float a,b,c;

    printf("Enter dollars =");
    scanf("%f",&a);

    b = (float)a*48;
    printf("%.2f $ = %.2f Rs.\n",a,b);

    c = (float)b/70;
    printf("%.2f $ = %.2f pound",a,c);

}

