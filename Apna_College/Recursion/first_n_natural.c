#include<stdio.h>
int nNaturalNumbers(int n);
int sum = 0;

int main() {
    system("CLS");
    int n;

    printf("Enter The Value Of N : ");
    scanf("%d", &n);

    int s = nNaturalNumbers(n);
    printf("Sum Of %d Natural Numbers = %d", n, s);
    return 0;
}

int nNaturalNumbers(int n) {
    if (n == 0) {
        return sum;
    }
    sum = sum + n;
    nNaturalNumbers(n-1);
}