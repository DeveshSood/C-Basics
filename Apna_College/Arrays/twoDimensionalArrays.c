#include<stdio.h>
int main() {
    system("CLS");
    int marks[2][3];

    for(int i=0; i<2; i++){
        printf("Enter marks of student %d :- ", (i+1));
        printf("\n");
        for(int j=0; j<3; j++){
            printf("Sunject %d = ", (j+1));
            scanf("%d", &marks[i][j]);
        }
    }

    printf("\n\n");

    for(int i=0; i<2; i++){
        printf("Student %d :- ", (i+1));
        for(int j=0; j<3; j++){
            printf("\nSubject %d Marks = %d", (j+1), marks[i][j]);
        }
        printf("\n");
    }
}