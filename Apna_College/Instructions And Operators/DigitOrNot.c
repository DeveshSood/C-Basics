#include <stdio.h>
int main() {
    system("CLS");
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9') {
        printf("Entered number %c is a digit", ch);
    }
    else {
        printf("Entered number %c is not a digit", ch);
    }
}