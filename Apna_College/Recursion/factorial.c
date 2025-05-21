#include<stdio.h>
int factorial(int n);

int main() {
    system("CLS");
    int n;

    printf("Enter Whose Factorial You Want : ");
    scanf("%d", &n);

    int f = factorial(n);
    printf("Factorial Of %d is %d", n, f);
    return 0;
}

int factorial(int n) {
    if (n == 1) {
        return 1;
    }
    int factnm1 = factorial(n-1);
    int factn = factnm1 *n;
}