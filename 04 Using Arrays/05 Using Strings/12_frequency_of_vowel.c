#include<stdio.h>
#include<string.h>

int main(){

    char a[100];
    int i,n=0;

    printf("Enter your string: ");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0'; // remove newline

    strlwr(a);

    for(i=0;i<strlen(a);i++){
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' ||a[i]=='u'){
            n+=1;
        }
    }

    printf("\nThe frequency of vowels in string is : %d ",n);
}