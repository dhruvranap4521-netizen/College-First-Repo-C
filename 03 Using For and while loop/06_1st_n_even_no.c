#include <stdio.h>

void main(){

    printf("\n-----------------------------------\n");
    printf("\n          1st N Even No.           \n");
    printf("\n-----------------------------------\n");

    int a,b;

    printf("How many no you print = ");
    scanf("%d",&a);

    b = 0;

    for(int i=1;i<=a;i+=1){

        printf("\n-----------------------------------\n");
        printf(  "  %d\n  " ,b);
        b += 2;

    }
    printf("\n-----------------------------------\n");

}

