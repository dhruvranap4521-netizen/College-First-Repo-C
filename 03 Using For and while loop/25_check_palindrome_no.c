#include<stdio.h>

int main(){

    int a,q,i,b,c=0;

    printf("Give the no : ");
    scanf("%d",&a);

    q = a;

    for(i=0;a>0;i++){
        b = a%10;
        c = c*10+b;
        a/=10;
        
    }

    if( q == c ){
        printf("no is palindrom\n");
    }

    else{
        printf("no is not palindrom\n");
    }
    return 0;
}