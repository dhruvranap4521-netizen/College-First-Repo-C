#include<stdio.h>
int main()
{
    int a,p=0,n=0,z=0,i;

    printf("Enter 10 values separated by spaces : \n");

    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&a);

        if(a>0){
            p++;
        }
        else if (a<0)
        {
            n++;
        }
        else{ 
            z++;
        }

    }

    printf("No of positive no : %d \n",p);
    printf("No of negative no : %d \n",n);
    printf("No of zero no : %d \n",z);
    
}