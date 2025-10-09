#include <stdio.h>

int main() {
    float grossSales, discount, netSales;

    // Input gross sales
    printf("Enter the Gross Sales: ");
    scanf("%f", &grossSales);

    // Apply discount conditions
    if (grossSales > 20000) {
        discount = 0.15 * grossSales;
    } 
    else if (grossSales > 10000) {
        discount = 0.10 * grossSales;
    } 
    else {
        discount = 0.05 * grossSales;
    }

    // Calculate net sales
    netSales = grossSales - discount;

    // Output results
    printf("\n-----------------------------------\n");
    printf("Gross Sales : %.2f\n", grossSales);
    printf("Discount    : %.2f\n", discount);
    printf("-----------------------------------\n");
    printf("Net Sales   : %.2f\n", netSales);
    printf("-----------------------------------\n");

    return 0;
}
