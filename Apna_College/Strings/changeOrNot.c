#include<stdio.h>
int main() {
    system("CLS");

    char *canChange = "Hello World";
    puts(canChange);
    canChange="Hello";
    puts(canChange);

    //when changing will show error
    // char cannotChange[] = "Hello World";
    // puts(cannotChange);
    // cannotChange="hello";
    // puts(cannotChange);

    return 0;
}