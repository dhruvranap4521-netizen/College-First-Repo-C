// 1st method

#include <stdio.h>

int main() {
    int a[5], n, i,b[5];

    printf("Enter number of elements (max 5): ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("\nOriginal array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\nReversed array: ");
    for (i = 0; i <n; i++) {
        b[i]=a[n-1-i];
    }
    for(i=0;i<n;i++){
        printf("%d ",b[i]);
    }

}

//  2nd method

int reverse(){

    int a[5], n, i;

    printf("Enter number of elements (max 5): ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("\nOriginal array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    
    for(i=0;i<n/2;i++){
        a[n-i-1]+=a[i];
        a[i]=a[n-i-1]-a[i];
        a[n-1-i]=a[n-i-1]-a[i];
    }

    printf("\nReversed array: ");
    for (i = 0; i < n; i++) {
        scanf("%d ", a[i]);
    }

}


