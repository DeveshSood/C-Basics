#include<stdio.h>
int main() {
    system("CLS");
    int a, b, c;
    double avg;

    printf("Enter 3 numbers to calculate their average\n");
    scanf("%d %d %d", &a, &b, &c);

    avg = (a+b+c)/3;

    printf ("%lf is the avg of %d, %d and %d", avg, a, b, c);
    return 0;
}

