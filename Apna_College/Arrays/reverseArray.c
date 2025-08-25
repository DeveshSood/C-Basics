#include<stdio.h>
void reversedArray(int arr[], int n);

void reversedArray(int arr[], int n) {
    int half = n/2;

    for(int i=0; i<half; i++) {
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}

int main() {
    system("CLS");

    int n;

    printf("Enter the length of Array : ");
    scanf("%d", &n);

    int arr[n];

    int *ptr = &arr[0];
    for(int i=0; i<n; i++) {
        printf("Enter %dth number :- ", (i+1));
        scanf("%d", &(*(ptr+i)));
    }

    printf("\n");

    printf("Entered Array :-\n");
    printf("[");
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("]\n\n");

    reversedArray(arr, n);

    printf("Reversed Array :-\n");
    printf("[");
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}