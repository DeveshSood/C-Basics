#include<stdio.h>
int main() {
    system("CLS");
    int s,e;
    printf("Enter the starting and ending values of loop-\n");
    scanf("%d %d", &s, &e);

    for(int i=s; i<=e; i++) {
        if(i%3 == 0) {
            continue;
        }
        printf("%d ",i);
    }
    return 0;
}