#include<stdio.h>

int main(){
    int a,i,b,c;

    printf("give me no : ");
    scanf("%d",&a);

    for(i=1;i<=a;i++){ 
        if(a%i == 0){
            printf("%d,",i);
        }
        
    }
    
}