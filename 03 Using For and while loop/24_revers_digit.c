#include<stdio.h>

int main(){

    int a,i,b;

    printf("Give the no : ");
    scanf("%d",&a);

    for(i=0;a>0;i++){
        b = a%10;
        a/=10;
        printf("%d",b);
    }

    return 0;
}