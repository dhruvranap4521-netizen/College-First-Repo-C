#include<stdio.h>

int main(){

    int i,a;

    //series A

    printf("\t\t\t\t\t========================\n");
    printf("\t\t\t\t\t        Series A        \n");
    printf("\t\t\t\t\t========================\n\n");

    for (i = 1,a =5 ; i <= 5,a>=1; i++,a--){
         
        printf("\t\t\t\t\t        %d%d\n", i, a);
        
    }
    printf("\t\t\t\t\t------------------------\n\n");

    //series B

    printf("\t\t\t\t\t========================\n");
    printf("\t\t\t\t\t        Series B        \n");
    printf("\t\t\t\t\t========================\n\n");

    for (i = 1,a =5 ; i <= 3 ,a>=3 ; i++,a--){
         
        printf("\t\t\t\t\t        %d%d\n", i, a);
        printf("\t\t\t\t\t        %d%d\n", i, a);
        
    }
    printf("\t\t\t\t\t------------------------\n\n");

}