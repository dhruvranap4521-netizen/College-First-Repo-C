#include<stdio.h>
#include<string.h>

int main(){

    char b[100],a[100];

    printf("Tell me your string : ");
    fgets(a,100,stdin);

    strcpy(b,a);
    strupr(b);

    printf("\nActual : ");
    puts(a);

    printf("In lower case : ");
    puts(b);
}