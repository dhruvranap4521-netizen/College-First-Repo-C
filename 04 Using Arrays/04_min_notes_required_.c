#include<stdio.h>

void main(){

    int i,b,j,c;
    int a[9] = {500,200,100,50,20,10,5,2,1};

    printf("Give me Rs. :");
    scanf("%d",&c);

    for(i=0;i<9;i++)
    {
        b = c/a[i];
        c = c%a[i];

        if(b != 0){
            printf("%d notes of %d Rs.\n",b,a[i]);
        }
    }

}

