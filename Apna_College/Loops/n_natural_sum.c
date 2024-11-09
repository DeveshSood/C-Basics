#include<stdio.h>
int main() {
    system("CLS");
    int n;
    int sum = 0;

    printf("Enter the value of n : ");
    scanf("%d", &n);

    for(int i=n; i>=1; i--) {
        printf("%d\n", i);
        sum = sum + i;
    }
    printf("sum = %d", sum);
}