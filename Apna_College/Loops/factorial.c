#include<stdio.h>
int main() {
    system("CLS");
    int n, fact=1;

    printf("ENter a number whose factorial you wamt : ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++) {
        fact = fact * i;
    }

    printf("Factorial of %d = %d", n,fact);
}