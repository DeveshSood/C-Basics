#include<stdio.h>

int main() {
    system("CLS");

    char str1[] = {'D','E','V','E','S','H','\0'};
    char str2[] = "DEVESH";

    for(int i=0; str1[i]!=0; i++) {
        printf("%c",str1[i]);
    }

    printf("\n");

    for(int i=0; str2[i]!=0; i++) {
        printf("%c",str2[i]);
    }

    return 0;
}