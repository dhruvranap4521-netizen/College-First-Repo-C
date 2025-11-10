#include<string.h>
#include<stdio.h>

int main(){
    char a[100];
    int length;

    printf("Tell me your string : ");
    scanf("%s",a);

    length = strlen(a) - 1;

    printf("The length of a your string is = %d ",length );

}