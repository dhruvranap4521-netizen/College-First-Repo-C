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

    printf("\nHow many numbers do you want to Delete at the First position : ");
    scanf("%d", &p);

    if (p < 0 || p > size) {
    printf("Invalid number to delete!");
    return 0;
    }


    for(i=0;i<size-p;i++){
        a[i]=a[p+i];
    }
    
    size -= p;

    printf("\nFinal array: ");
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    
}
