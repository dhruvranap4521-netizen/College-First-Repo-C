#include<stdio.h>

int main(){

    int c,a,i,b,s=0;

    printf("Check your given no is automorphic : ");
    scanf("%d",&a);

    b = a*a;

    for(i=10;i<b;i*=10){
        c = 0;
        c = b % i;
        if(c == a){
            s=1;
        }
    }

    if(s == 1){
        printf("Your given no %d is automorphic no. ",a);
    }
    else{
        printf("Your given no %d is not automorphic no. ",a);
    }
    
}