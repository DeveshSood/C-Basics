#include<stdio.h>
int main() {
    system("CLS");

    int n;

    printf("Enter the number of tables you want :- ");
    scanf("%d", &n);

    int table[n][10];

    for(int i=0; i<n; i++) {
        for(int j=0; j<10; j++) {
            table[i][j] = (i+1)*(j+1);
        }
    }

    for(int i=0; i<n; i++) {
        printf("\nTable of %d :- \n",(i+1));
        for(int j=0; j<10; j++) {
            printf("%d x %d = %d\n",(i+1) ,(j+1) ,table[i][j]);
        }
    }

    return 0;
}