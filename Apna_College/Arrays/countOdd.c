#include<stdio.h>
int count=0;
void countOdd(int *arr, int n);

void countOdd(int *arr, int n) {
    int *ptr = &arr[0];
    for(int i=0; i<n; i++) {
        if(*(ptr+i)%2 != 0) {
            count++;
        }
    }
}

int main() {
    int n;
    system("CLS");

    printf("Enter the length of Array : ");
    scanf("%d", &n);

    int arr[n];

    int *ptr = &arr[0];
    for(int i=0; i<n; i++) {
        printf("Enter %dth number :- ", (i+1));
        scanf("%d", &(*(ptr+i)));
    }

    countOdd(arr,n);

    printf("Number of odd numbers = %d", count);
}