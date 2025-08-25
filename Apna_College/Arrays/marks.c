#include<stdio.h>
int main() {
    int arr[3];
    
    system("CLS");
    printf("Enter marks in Physics : - ");
    scanf("%d", &arr[0]);

    printf("Enter marks in Chemistry : - ");
    scanf("%d", &arr[1]);

    printf("Enter marks in Mathematics : - ");
    scanf("%d", &arr[2]);

    printf("Physics = %d, Chemistry = %d, Mathematics = %d", arr[0], arr[1], arr[2]);
}