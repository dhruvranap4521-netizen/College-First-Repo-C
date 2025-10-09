#include<stdio.h>

int main(){

    int a,i,b,x,s=0,orginal,n=0,z;
    printf("enter no:");
    scanf("%d",&a);

    orginal = a;

    for(i=0;a>0;i++){
        a/=10;
        n++;
    }

    a = orginal;

    for(i=0;a>0;i++){
        b=a%10;
        x = 1;
        for(z=0;z<n;z++){
            x = x*b;
        }
        s+=x;
        a/=10;
    }

    if (orginal == s)
        printf("%d is an Armstrong number.\n", orginal);
    else
        printf("%d is not an Armstrong number.\n", orginal);

    return 0;

}