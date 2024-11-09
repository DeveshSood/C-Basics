#include<stdio.h>
void helloworld(int count);

int main() {
    int count;

    system("CLS");
    printf("Enter how many times you want to print \"Hello World\" : ");
    scanf("%d", &count);

    helloworld(count);

    return 0;
}

//recursive function
void helloworld(int count) {
    if (count == 0) {
        return;
    }
    printf("Hello World\n");
    helloworld(count-1);
}