#include <stdio.h>

void main(){

    printf("\n-----------------------------------\n");
    printf("\n        1 TO N Natural No.         \n");
    printf("\n-----------------------------------\n");

    int a;

    printf("How many no you print = ");
    scanf("%d",&a);

    for(int i=1;i<=a;i+=1){

        printf("\n-----------------------------------\n");
        printf(  "  %d\n  " ,i);

    }
    printf("\n-----------------------------------\n");

}
