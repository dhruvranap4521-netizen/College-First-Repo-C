#include<stdio.h>

int main(){

    int a=0,i;

    for(i=0;i<=100;i+=3){
        a+=i;
    }
    printf("Sum of all integers from 1 to  100,which are divisible by 3 is: %d",a);
    return 0;
}