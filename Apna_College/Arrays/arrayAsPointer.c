#include<stdio.h>
int main() {
    system("CLS");
    int age[10];

    int *ptr = &age[0];

    for(int i=0; i<10; i++) {
        printf("%dth age = ", i);
        scanf("%d", (ptr+i));
    }

    printf("\n\n");

    for(int i=0; i<10; i++) {
        printf("%dth age = %d\n", i, *(ptr+i));
    }
}