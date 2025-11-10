#include<stdio.h>
#include<string.h>

int main(){

    char a[100],b[100];
    int i,n,j;

    printf("Tell me your string : ");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a,"\n")]='\0';

    n=strlen(a);

    for (i = n - 1, j = 0; i >= 0; i--, j++){
        b[j]=a[i];
    }

    b[j]='\0';

    strlwr(a);
    strlwr(b);

    if(strcmp(a,b)==0){
        printf("The string is palindrome string\n");
    }
    else{
        printf("The string is not palindrome string\n");
    }

}