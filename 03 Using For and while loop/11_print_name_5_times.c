#include <stdio.h>

void main(){

    printf("\n-----------------------------------\n");
    printf("\n     Print your name 5 times       \n");
    printf("\n-----------------------------------\n");

    char s[25];

    printf("Tell me your name = ");
    scanf("%s",&s);

    for(int i=1;i<=5;i+=1){
        printf("\n-----------------------------------\n");
        printf( "Your name is =  %s\n  " ,s);
        printf("\n-----------------------------------\n");
    }
    return 0;

}


