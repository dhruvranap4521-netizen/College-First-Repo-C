#include <stdio.h>
int main() {
    float i,p,r=5,n;

    printf("\t\t\t\t\t=====================================\n");
    printf("\t\t\t\t\t      Simple Interest Calculator      \n");
    printf("\t\t\t\t\t=====================================\n\n");

    printf("\tEnter the Principal Amount (Rs.): ");
    scanf("%f",&p);

    printf("\tEnter the Time Period (in years): ");
    scanf("%f",&n);

    i = (float)p*r*n/100;

    printf("\n\t-------------------------------------\n");
    printf("\tPrincipal Amount : Rs.%.2f\n", p);
    printf("\tRate of Interest : %.2f%%\n", r);
    printf("\tTime Period      : %.2f years\n", n);
    printf("\t-------------------------------------\n");
    printf("\tSimple Interest  : Rs.%.2f\n", i);
    printf("\tTotal Amount     : Rs.%.2f\n", p + i);
    printf("\t-------------------------------------\n");

    return 0;
}
