#include<stdio.h>

int main()
{

    int a,i,count = 0;

    printf("Enter the no: ");
    scanf("%d",&a);

    for(i=0;a>0;i++){
        a = a/10;
        count++;
    }

    printf("The no of digit is%d ",count);

    return 0;

}