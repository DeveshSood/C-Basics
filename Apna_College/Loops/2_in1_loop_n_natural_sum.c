#include<stdio.h>
int main() {
    system("CLS");
    int n;
    int sum = 0;

    printf("Enter the value of n : ");
    scanf("%d", &n);

    for(int i=1, j=n; i<=n && j>=1; i++, j--) {
        sum = sum + i;
        printf("%d ",j);
    }
    printf("\nSum = %d",sum);
}