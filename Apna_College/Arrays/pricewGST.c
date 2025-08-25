#include<stdio.h>
int main() {
    system("CLS");
    int n;
    printf("Enter number of items :- ");
    scanf("%d", &n);
    float price[n];

    for(int i=0; i<n; i++) {
        printf("Enter price of %dth item - ", (i+1));
        scanf("%f", &price[i]);
    }
    printf("\n--------Final Price--------");
    for(int i=0; i<n; i++) {
        printf("\nPrice of %dth item - %f", (i+1), (price[i] + (price[i]*0.18)));
    }

    return 0;
}