#include<stdio.h>
int main() {
    system("CLS");
    int n = 22;
    int *ptr = &n;
    int valptr = *ptr;

    printf("Value of n = %d\n",n);
    printf("Address of n = %p\n",ptr);
    printf("Value of ptr = %d\n",*ptr);
    printf("Address of ptr = %p\n",&ptr);
}