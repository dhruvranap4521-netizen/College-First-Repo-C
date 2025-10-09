#include<stdio.h>

int main(){

    int a,i,b=0,c;

    for(i=2;i<=500;i++){
        c = 0;
        for(a=2;a<i/2;a++){
            if(i % a == 0){
                c = 1;
            }
        }
        if(c==0){
            b+=1;
        }
    }

    printf("The total prime no between 1 to 500 is : %d ",b);
}