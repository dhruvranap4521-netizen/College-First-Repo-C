#include <stdio.h>

void main(){

    printf("\n-----------------------------------\n");
    printf("\n    Sum of 1st N Natural No.       \n");
    printf("\n-----------------------------------\n");

    int a,b=0;

    printf("Tell me the value of n = ");
    scanf("%d",&a);

    for(int i=1;i<=a;i+=1){
         b+=i;
    }
    printf("\n-----------------------------------\n");
    printf( "The Sum of 1st N no =  %d\n  " ,b);
    printf("\n-----------------------------------\n");

}

