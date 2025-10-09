
#include <stdio.h>

void main(){

    printf("\n-----------------------------------\n");
    printf("\n     Print your name n times       \n");
    printf("\n-----------------------------------\n");

    char s[25];
    int a;

    printf("Tell me your name = ");
    scanf("%s",&s);
    printf("Tell me how many times print your name:");
    scanf("%d",&a);

    for(int i=1;i<=a;i+=1){
        printf("\n-----------------------------------\n");
        printf( "Your name is =  %s\n  " ,s);
        printf("\n-----------------------------------\n");
    }
    return 0;

}
