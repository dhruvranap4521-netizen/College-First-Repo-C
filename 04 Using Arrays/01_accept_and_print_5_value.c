#include <stdio.h>

int main() {
    int arr[5];
    int i;

    printf("Enter 5 numbers separated by spaces: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("You entered: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
