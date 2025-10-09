#include <stdio.h>

int main() {
    float gross, allowance, deduction, netSalary;

    // Input Gross Salary
    printf("Enter the Gross Salary: ");
    scanf("%f", &gross);

    // Conditions
    if (gross > 10000) {
        allowance = 0.10 * gross;
        deduction = 0.03 * gross;
    } 
    else if (gross > 5000) {
        allowance = 0.07 * gross;
        deduction = 0.02 * gross;
    } 
    else {
        allowance = 0;
        deduction = 0;
    }

    // Calculate Net Salary
    netSalary = gross + allowance - deduction;

    // Output Results
    printf("\n-----------------------------------\n");
    printf("Gross Salary   : %.2f\n", gross);
    printf("Allowance      : %.2f\n", allowance);
    printf("Deduction      : %.2f\n", deduction);
    printf("-----------------------------------\n");
    printf("Net Salary     : %.2f\n", netSalary);
    printf("-----------------------------------\n");

    return 0;
}
