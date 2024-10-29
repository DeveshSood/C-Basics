#include<stdio.h>
void french();
void indian();

int main() {
    system("CLS");
    char loc;
    printf("F-French\nI-Indian : ");
    scanf("%c", &loc);

    if(loc == 'F' || loc == 'f') {
        french();
    }
    else if(loc == 'I' || loc == 'i') {
        indian();
    }
    return 0;
}

void french() {
    printf("Bonjour");
}

void indian() {
    printf("Namaste");
}