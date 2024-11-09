#include<stdio.h>
int main() {
    system("CLS");

    int n;
    printf("Enter Whose Table(Till 10) You Want : ");
    scanf("%d", &n);

    for(int i=10; i>=1; i--) {
        printf("%d x %d = %d\n", n, i, n*i);
    }
}