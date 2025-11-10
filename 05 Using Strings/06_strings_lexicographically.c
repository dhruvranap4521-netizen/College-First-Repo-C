#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];
    int result;

    printf("Tell me your 1st string (A): ");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';   // remove newline

    printf("Tell me your 2nd string (B): ");
    fgets(b, sizeof(b), stdin);
    b[strcspn(b, "\n")] = '\0';   // remove newline

    result = strcmp(a, b);

    if (result == 0) {
        printf("Both strings A ('%s') and B ('%s') are equal.\n", a, b);
    } 
    else if (result > 0) {
        printf("1st string A ('%s') is greater than 2nd string B ('%s').\n", a, b);
    } 
    else {
        printf("1st string A ('%s') is smaller than 2nd string B ('%s').\n", a, b);
    }

    return 0;
}
