#include <stdio.h>

void main(){

    printf("\n------------------------------------------------------\n");
    printf("\n  Sum which divisible by 13 in the range og 1 to 100  \n");
    printf("\n------------------------------------------------------\n");

    int a,b=0;

    for(int i=0;i<=100;i+=13)
    {
        b+=i;
    }
    printf("\n------------------------------------------------------\n");
    printf( "The Sum of no which divisible by 13 in the range of 1 to 100 =  %d\n  " ,b);
    printf("\n------------------------------------------------------\n");

}