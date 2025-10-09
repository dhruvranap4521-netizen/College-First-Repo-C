#include<stdio.h>

int main()
{

    int a,i,b,c=0;


    printf("Give the no : ");
    scanf("%d",&a);

    for ( i = 0; a >0 ; i++)
    {
        b = a%10;
        c+=b;
        a/=10;
       
    }

    printf("The Summantion od digits of a given no is : %d",c);

    return 0;
    
}