#include<stdio.h>

int main(){

    int a=1,i=1,b=0,n,c;

    printf("Enter how many terms of the Fibonacci series you want: ");
    scanf("%d", &n);

   printf("Fibonacci series up to %d terms: ", n);

    while (i<=n)
    {
        printf("%d ",b);
        c = b+a;
        a=b;
        b=c;
        
        i++;
    }
 
}
