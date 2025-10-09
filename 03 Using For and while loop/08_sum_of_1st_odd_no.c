#include <stdio.h>

void main(){

    printf("\n-----------------------------------\n");
    printf("\n       Sum of 1st N Odd No.        \n");
    printf("\n-----------------------------------\n");

    int a,b=0,c=1;

    printf("Tell me the value of N = ");
    scanf("%d",&a);

    for(int i=1;i<=a;i+=1)
    {
        b+=c;
        c+=2;
    }
    printf("\n-----------------------------------\n");
    printf( "The Sum of 1st %d Odd no =  %d\n  " ,a,b);
    printf("\n-----------------------------------\n");

}


