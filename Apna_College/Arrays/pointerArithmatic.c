#include<stdio.h>
int main() {
    system("CLS");

    printf("Integer :- \n");
    int age=19;
    int*ptr = &age;
    printf("%u\n", ptr);
    ptr++;
    printf("%u\n", ptr);
    ptr--;
    printf("%u\n", ptr);

    printf("\nCharacter :- \n");
    char c='*';
    char*ptr2 = &c;//** */
    printf("%u\n", ptr2);
    ptr2++;
    printf("%u\n", ptr2);
    ptr2--;
    printf("%u\n", ptr2);
    return 0;
}