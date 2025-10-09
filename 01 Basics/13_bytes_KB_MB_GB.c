#include<stdio.h>
void main()
{
    float a,b,c,d;

    printf("Enter bytes =");
    scanf("%f",&a);

    b = (float)a/1000;
    printf("%.3f bytes = %.3f KB\n",a,b);

    c = (float)a/1000000;
    printf("%.6f bytes = %.6f MB\n",a,c);

    d = (float)c/1000;
    printf("%.9f bytes = %.9f GB\n",a,d);

}
