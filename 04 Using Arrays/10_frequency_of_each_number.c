#include<stdio.h>

int main(){

    int a[10],f[10],i,x,j,s;

    printf("=====================================\n");
    printf("       Frequency of each number      \n");
    printf("=====================================\n\n");

    printf("Enter no of elements (max 10) : ");
    scanf("%d",&x);

    if(x>10 || x<0){
        printf("No of elements must be less than 10");
    }

    else{
        printf("Enter the elements separated by spaces : ");
        for(i=0;i<x;i++){
            scanf("%d",&a[i]);
        }

        for(i=0;i<x;i++){
            s = 0;
            for(j=0;j<x;j++){
                if( a[i] == a[j] ){
                    s+=1;
                    f[i] = s;
                }
            }
        }

        printf("\n\n-------------------------\n");
        for(i=0;i<x;i++){
            printf("The frequency of %d is %d \n ",a[i],f[i]);

        }
    }
}