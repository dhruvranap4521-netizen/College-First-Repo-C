#include<string.h>
#include<stdio.h>

int main(){

    char a[100],b[100];

    printf("Tell me your 1st string (A): ");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';   // remove newline

    printf("Tell me your 2nd string (B): ");
    fgets(b, sizeof(b), stdin);
    b[strcspn(b, "\n")] = '\0';   // remove newline

    if (strlen(a) + strlen(b) >= sizeof(a)) {
        printf("Error: Strings too long to concatenate safely.\n");
        return 1;
    }

    strcat(a,b);

    printf("\nThe concatenated string is: ");
    puts(a);
}