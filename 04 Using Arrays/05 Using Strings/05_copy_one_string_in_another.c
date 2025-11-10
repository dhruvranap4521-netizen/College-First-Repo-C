#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];

    printf("Tell me about you in a single line: ");
    fgets(a, sizeof(a), stdin);

    strcpy(b, a);

    printf("\nActual : ");
    puts(b);

    printf("Copy string : ");
    puts(a);

    return 0;
}