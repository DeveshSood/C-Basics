#include<stdio.h>
void address(int *n);

void address(int *n) {
    printf("Address address = %u",n);
}

void main() {
    system("CLS");
    int n = 82;

    address(&n);
    printf("\nMain Address = %u", &n);
}