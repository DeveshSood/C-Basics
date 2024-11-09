#include<stdio.h>
int main() {
    system("CLS");
    int n;

    printf("Enter the value of n for printing : 1 to N : ");
    scanf("%d", &n);

    printf("\nFor Loop -\n");
    for(int i=1; i<=n; i++) {
        printf("%d\n",i);
    }

    printf("\nWhile Loop -\n");
    int j=1;
    while(j<=n) {
        printf("%d\n",j);
        j++;
    }

    printf("\nDo While Loop -\n");
    int k=1;
    do {
        printf("%d\n",k);
        k++;
    } while(k<=n);
    
    return 0;
}