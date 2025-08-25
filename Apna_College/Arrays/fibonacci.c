#include<stdio.h>
int fib[];

void fibonacci(int a, int b, int len) {
    for(int i=2; i<len; i++) {
        // int next = a+b;
        // a = b;
        // b = next;   
        // fib[i]= next;
        //          OR
        fib[i] = fib[i-1] + fib[i-2];
    }

    printf("\n\nFibonacci series :\n");

    for(int i=0; i<len; i++) {
        printf("%d ", fib[i]);
    }

    printf("\n");
}

int main() {
    system("CLS");
    int a, b, len;

    printf("Enter the starting two numbers and length :- ");
    scanf("%d %d %d", &a, &b, &len);
    
    fib[len];
    fib[0]=a;
    fib[1]=b;
    fibonacci(a,b,len);
    return 0;
}