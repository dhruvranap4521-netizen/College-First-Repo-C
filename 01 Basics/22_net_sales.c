#include <stdio.h>

int main() {
    float grossSales, discount, netSales;

    // Input Gross Sales
    printf("Enter the Gross Sales: ");
    scanf("%f", &grossSales);

    // Calculate discount (10% of Gross Sales)
    discount = 0.10 * grossSales;

    // Calculate Net Sales
    netSales = grossSales - discount;

    // Output the results
    printf("\n-----------------------------------\n");
    printf("Gross Sales      : %.2f\n", grossSales);
    printf("Discount (10%%)   : %.2f\n", discount);
    printf("-----------------------------------\n");
    printf("Net Sales        : %.2f\n", netSales);
    printf("-----------------------------------\n");

    return 0;
}
