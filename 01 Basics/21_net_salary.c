#include <stdio.h>

int main() {
    float grossSalary, allowance, deduction, netSalary;

    // Input Gross Salary
    printf("Enter the Gross Salary: ");
    scanf("%f", &grossSalary);

    // Calculate allowance and deduction
    allowance = 0.10 * grossSalary;  // 10% of Gross
    deduction = 0.03 * grossSalary;  // 3% of Gross

    // Calculate Net Salary
    netSalary = grossSalary + allowance - deduction;

    // Output the results
    printf("\n-----------------------------------\n");
    printf("Gross Salary   : %.2f\n", grossSalary);
    printf("Allowance (10%%): %.2f\n", allowance);
    printf("Deduction (3%%): %.2f\n", deduction);
    printf("-----------------------------------\n");
    printf("Net Salary     : %.2f\n", netSalary);
    printf("-----------------------------------\n");

    return 0;
}
