#include<stdio.h>

int main(){

    int a,i=1,b=0;

    printf("Give me the no which you want to stop the fibonacci series :");
    scanf("%d",&a);

    printf("nth term fibonacci series :");
    while (i<=a)
    {
        b+=i;
        i+=b;
        printf("%d",&b);
    }
    
    
}