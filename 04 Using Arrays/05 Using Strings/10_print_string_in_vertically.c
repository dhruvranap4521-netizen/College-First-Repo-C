#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i;

    printf("Enter your string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // remove newline

    printf("\nCharacters of the string printed vertically:\n");

    for (i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}
