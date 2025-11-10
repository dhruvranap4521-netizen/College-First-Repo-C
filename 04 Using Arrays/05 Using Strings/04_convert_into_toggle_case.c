#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];
    int i = 0;

    printf("Tell me your string : ");
    fgets(a, sizeof(a), stdin);

    strcpy(b, a);

    while (a[i] != '\0') {
        if (a[i] >= 'A' && a[i] <= 'Z') {
            a[i] = a[i] + 32;  // convert to lowercase
        } 
        else if (a[i] >= 'a' && a[i] <= 'z') {
            a[i] = a[i] - 32;  // convert to uppercase
        }
        i++;
    }

    printf("\nActual : ");
    puts(b);

    printf("In toggle case : ");
    puts(a);

    return 0;
}
