#include<stdio.h>

int main(){

    int i;

    for(i=1;i<=100;i++){
        if(i%5 == 0){
            printf("No %d is divisible by 5\n",i);
        }
    }
    return 0;
}