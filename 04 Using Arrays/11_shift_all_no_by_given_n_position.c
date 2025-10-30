#include <stdio.h>

int main(){

    int i,a[10],x,b=0,c[10];
    char s[10];

    printf("============================================\n");
    printf("     Shift All Nos. By Given N Positions    \n");
    printf("============================================\n\n");

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

        if( x < 10){
            i = x;
            for (i; i < 10; i++){
                a[i] = 0;
            }
        }

        for(i=0;i<10;i++){
            c[i] = a[i];
        }

        printf("\n------------------------------------------------\n");

        printf("\n How many no you want to shift?(N) : ");
        scanf("%d",&b);

        printf("\n Which side do you want to shift? (left/right) : ");
        scanf("%s",s);

        printf("\n------------------------------------------------\n");


        int isLeft = (s[0] == 'l' && s[1] == 'e' && s[2] == 'f' && s[3] == 't' && s[4] == '\0');
        int isRight = (s[0] == 'r' && s[1] == 'i' && s[2] == 'g' && s[3] == 'h' && s[4] == 't' && s[5] == '\0');

        if(isLeft){
        for(i=0;i<10;i++){
            if(b<10){
                a[i] = a[b];
                b++;
            }
            else{a[i] = 0; };
        }
        }

        if(isRight){
            b = 9 - b;
            for(i=9;i>=0;i--){
                if(b>=0){
                    a[i] = a[b];
                    b--;
                }
                else{a[i] = 0; };
            }
        }

        printf("Orginal elements : ");
        for(i=0;i<10;i++){
            printf("%d  ",c[i]);
        }

        printf("\n------------------------------------------------\n");
        printf("\nAfter shited :");
        for(i=0;i<10;i++){
            printf("%d  ",a[i]);
        }
        printf("\n------------------------------------------------\n");

        }

}