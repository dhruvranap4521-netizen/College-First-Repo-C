#include<stdio.h>
#include<string.h>

int main(){

    char a[100],b[100];
    int n,i,j;

    printf("Tell me your string : ");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a,"\n")]='\0';

    n=strlen(a);

    for (i = n - 1, j = 0; i >= 0; i--, j++){
        b[j]=a[i];
    }

    b[j] = '\0'; // terminate reversed strings

    printf("\nActual string : ");
    puts(a);

    printf("Reverse string in vertical :\n");
    for (i = 0; b[i] != '\0'; i++) {
        printf("%c\n", b[i]);
    }

    return 0;

}
