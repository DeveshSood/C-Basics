#include<stdio.h>
void address(int *n);

void address(int *n) {
    printf("%p",&(*n));
}

void main() {
    int n = 82;
    printf("%p\n", &n);
    address(&n);
}