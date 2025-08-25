#include<stdio.h>
int main() {
    system("CLS");
    
    char fullName[100];
    printf("Enter your full nane :- ");
    //gets(fullName);
    fgets(fullName ,7 ,stdin);
    printf("Your name is ");
    puts(fullName);

    return 0;
}