#include<stdio.h>
int fibo(int n);

void main() {
    system("CLS");

    int n;
    printf("Length of fibonacci? : ");
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        printf("%d ",fibo(i));
    }
}

int fibo(int n) {
    if(n==0) {
        return 0;
    }
    if(n==1) {
        return 1;
    }
    return fibo(n-1) + fibo(n-2);
}