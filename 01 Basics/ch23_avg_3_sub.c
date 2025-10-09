#include <stdio.h>

int main() {
    float maths, phy, che, total, avg;

    // Input marks of three subjects
    printf("Enter marks of Mathematics: ");
    scanf("%f", &maths);

    printf("Enter marks of Physics: ");
    scanf("%f", &phy);

    printf("Enter marks of Chemistry: ");
    scanf("%f", &che);

    // Calculate total and avg
    total = maths + phy + che;
    avg = total / 3.0;

    // Output results
    printf("\n-----------------------------------\n");
    printf("Mathematics : %.2f\n", maths);
    printf("Physics : %.2f\n", phy);
    printf("Chemistry : %.2f\n", che);
    printf("-----------------------------------\n");
    printf("Total     : %.2f\n", total);
    printf("avg   : %.2f\n", avg);
    printf("-----------------------------------\n");

    return 0;
}
