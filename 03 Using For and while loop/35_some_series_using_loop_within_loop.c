#include<stdio.h>

int main(){

    int a,b,i;

    //series A

    printf("\t\t\t\t\t========================\n");
    printf("\t\t\t\t\t        Series A        \n");
    printf("\t\t\t\t\t========================\n\n");

    for (i = 1; i <= 2; i++){
        for(a=1;a<=3;a++){

            printf("\t\t\t\t\t        %d%d\n", i, a);

        }
    }
    printf("\t\t\t\t\t------------------------\n\n");


    //series B

    printf("\t\t\t\t\t========================\n");
    printf("\t\t\t\t\t        Series B        \n");
    printf("\t\t\t\t\t========================\n\n");

    for (i = 1; i <= 3; i++){
        for(a=1;a<=i;a++){

            printf("\t\t\t\t\t        %d%d\n", i, a);

        }
    }
    printf("\t\t\t\t\t------------------------\n\n");

    //series C

    printf("\t\t\t\t\t========================\n");
    printf("\t\t\t\t\t        Series C        \n");
    printf("\t\t\t\t\t========================\n\n");

    for (i = 1; i <= 2; i++){
        for(a=1;a<=2;a++){
            for(b=1;b<=2;b++){

                printf("\t\t\t\t\t       %d%d%d\n", i, a,b);

            }

        }
    }
    printf("\t\t\t\t\t------------------------\n\n");


    //series D

    printf("\t\t\t\t\t========================\n");
    printf("\t\t\t\t\t        Series D        \n");
    printf("\t\t\t\t\t========================\n\n");

    for (i = 5; i >= 3; i--){
        for(a=1;a<=2;a++){
            
            printf("\t\t\t\t\t       %d%d\n", i, a);

        }
    }
    printf("\t\t\t\t\t------------------------\n\n");
    
}
