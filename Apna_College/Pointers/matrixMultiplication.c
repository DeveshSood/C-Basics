#include <stdio.h>

int arr1[50][50];
int arr2[50][50];
int arr3[50][50];

void display(int *r3, int *c3);
void input(int *r1, int *c1, int *r2, int *c2);
void multiply(int *r1, int *c1, int *r2, int *c2, int *r3, int *c3, int *doable);

void input(int *r1, int *c1, int *r2, int *c2) {
    int i, j;

    // First matrix input
    printf("First Matrix :-\n");
    printf("Enter Number of Rows: ");
    scanf("%d", r1);
    printf("Enter Number of Columns: ");
    scanf("%d", c1);

    printf("Enter elements :-\n");
    for(i = 0; i < *r1; i++) {
        for(j = 0; j < *c1; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\n1st Matrix -\n");
    for(i = 0; i < *r1; i++) {
        for(j = 0; j < *c1; j++) {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }


    // Second matrix input
    printf("\nSecond Matrix :-\n");
    printf("Enter Number of Rows: ");
    scanf("%d", r2);
    printf("Enter Number of Columns: ");
    scanf("%d", c2);

    printf("Enter elements :-\n");
    for(i = 0; i < *r2; i++) {
        for(j = 0; j < *c2; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

     printf("\n2nd Matrix -\n");
     for(i = 0; i < *r2; i++) {
        for(j = 0; j < *c2; j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
}

void multiply(int *r1, int *c1, int *r2, int *c2, int *r3, int *c3, int *doable) {
    int i, j, k;

    *r3 = *r1;
    *c3 = *c2;

    if(*c1 == *r2) {
        for(i = 0; i < *r1; i++) {
            for(j = 0; j < *c2; j++) {
                arr3[i][j] = 0;
                for(k = 0; k < *c1; k++) {
                    arr3[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
        *doable=1;
    } 
    else {
        printf("\n----Multiplication Not Possible----");
        *doable=0;
    }
}

void display(int *r3, int *c3) {
    int i, j;
    printf("\nResultant Matrix :-\n");
    for(i = 0; i < *r3; i++) {
        for(j = 0; j < *c3; j++) {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int r1, c1, r2, c2, r3, c3, doable=0;

    system("CLS");
    input(&r1, &c1, &r2, &c2);
    multiply(&r1, &c1, &r2, &c2, &r3, &c3, &doable);

    if(doable){
        display(&r3, &c3);
    }

    return 0;
}