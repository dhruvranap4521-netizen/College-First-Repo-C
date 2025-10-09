#include <stdio.h>

void main(){

    printf("\n-----------------------------------\n");
    printf("\n  factorial of 1 TO N Natural No.  \n");
    printf("\n-----------------------------------\n");

    int a,b=1;

    printf("Tell me the value of n = ");
    scanf("%d",&a);

    for(int i=1;i<=a;i+=1){
         b*=i;
    }
    printf("\n-----------------------------------\n");
    printf( "The factorial of 1st N no =  %d\n  " ,b);
    printf("\n-----------------------------------\n");
    return 0;

}


