#include<stdio.h>
void printString(char name[]);

int main() {
    system("CLS");
    
    char firstName[] = "Devesh";
    char lastName[] = "Sood";

    printString(firstName);
    printString(lastName);

    return 0;
}

void printString(char name[]) {
    for(int i=0 ;name[i]!='\0' ;i++) {
        printf("%c", name[i]);
    }
    printf(" ");
}