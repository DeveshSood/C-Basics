#include<stdio.h>
int main() {
    system("CLS");
    int i=92;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("*ptr = %d\n",*ptr);
    printf("**pptr = %d",**pptr);
}