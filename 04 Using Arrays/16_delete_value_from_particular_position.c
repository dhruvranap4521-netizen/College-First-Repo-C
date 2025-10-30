#include<stdio.h>

int main(){

    int a[100],i,size,p;

    printf("How many elements are currently in the array (up to 100)? ");
    scanf("%d", &size);

    if (size > 100 || size < 0) {
        printf("Invalid size!");
        return 0;
    }

    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    printf("At which position do you want to delete the number (1 to %d)? ", size );
    scanf("%d", &p);

    if (p < 1 || p > size) {  
        printf("Invalid position!");
        return 0;
    }

    for(i=p-1;i<size;i++){
        a[i]=a[i+1];
    }

    size -= 1;

    printf("\nFinal array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}