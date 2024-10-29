#include<stdio.h>
#include<conio.h>
int main() {
    system("CLS");
    int a, b, c;

    printf("Enter 3 numbers\n");
    scanf("%d %d %d", &a, &b, &c);

    if(a<b && a<c) {
        printf("%d is the smallest number of the three", a);
    }
    else if(b<a && b<c) {
        printf("%d is the smallest number of the three", b);
    }
    else if(c<b && c<a) {
        printf("%d is the smallest number of the three", c);
    }

    return 0;
}