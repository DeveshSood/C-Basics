#include<stdio.h>
int main() {
    system("CLS");
    int n;

    for(int i=1; ; i++) {
        printf("\nEnter the value of n : ");
        scanf("%d", &n);

        if (n%2 != 0) {
            break;
        }
    }
}