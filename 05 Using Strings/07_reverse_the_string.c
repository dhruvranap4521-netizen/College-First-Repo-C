#include<stdio.h>
#include<string.h>

int main(){

    char a[100],b[100];
    int i,j,n;

    printf("Tell me your string : ");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a,"\n")]='\0';

    n=strlen(a);

    for (i = n - 1, j = 0; i >= 0; i--, j++){
        b[j]=a[i];
    }

    b[j] = '\0'; // terminate reversed string

    printf("\nActual string : ");
    puts(a);

    printf("Reverse string : ");
    puts(b);

   
}