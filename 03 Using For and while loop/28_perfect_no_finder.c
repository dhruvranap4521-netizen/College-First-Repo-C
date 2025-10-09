#include<stdio.h>

int main(){

    int a,i,b=0,c;

  

    printf("give me no :");
    scanf("%d",&a);

    c=a;

    for(i=1;i<a;i++){
        if(a%i == 0){
            b+=i;
        }
    

    }

    

    if(c==b){
        printf("no is perfact no");
    }
    else{
        printf("no is not perfact");
    }
}