#include <stdio.h>

int main() {
    float maths, phy, che, total, avg;

    // Input marks of 3 subjects
    printf("Enter marks of Mathematics: ");
    scanf("%f", &maths);

    printf("Enter marks of Physics: ");
    scanf("%f", &phy);

    printf("Enter marks of Chemistry: ");
    scanf("%f", &che);

    // Calculate total and average
    total = maths + phy + che;
    avg = total / 3.0;

    // Display total and average
    printf("\n-----------------------------------\n");
    printf("Mathematics : %.2f\n", maths);
    printf("Physics     : %.2f\n", phy);
    printf("Chemistry   : %.2f\n", che);
    printf("-----------------------------------\n");
    printf("Total       : %.2f\n", total);
    printf("Average     : %.2f\n", avg);
    printf("-----------------------------------\n");

    // Grade calculation
    if (maths < 35 || phy < 35 || che < 35) {
        printf("Result      : FAIL (because marks < 35 in one or more subjects)\n");
    }
    else {
        if (avg >= 70)
            printf("Result      : DISTINCTION\n");
        else if (avg >= 60)
            printf("Result      : FIRST CLASS\n");
        else if (avg >= 50)
            printf("Result      : SECOND CLASS\n");
        else if (avg >= 35)
            printf("Result      : THIRD CLASS\n");
        else
            printf("Result      : FAIL\n");
    }

    printf("-----------------------------------\n");

    return 0;
}
