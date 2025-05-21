// #include<stdio.h>
// int nNaturalNumbers(int n);

// int main() {
//     system("CLS");
//     int n;

//     printf("Enter The Value Of N : ");
//     scanf("%d", &n);

//     int s = nNaturalNumbers(n);
//     printf("Sum Of %d Natural Numbers = %d", n, s);
//     return 0;
// }

// int nNaturalNumbers(int n) {
//     if (n == 0) {
//         return sum;
//     }
//     int sum = sum + n;
//     nNaturalNumbers(n-1);
// }

//or

#include<stdio.h>
int nNaturalNumbers(int n);

int main() {
    system("CLS");
    int n;

    printf("Enter value of N : ");
    scanf("%d", &n);

    int s = nNaturalNumbers(n);
    printf("Sum of %d is %d", n, s);
    return 0;
}

int nNaturalNumbers(int n) {
    if (n == 1) {
        return 1;
    }
    int sumnm1 = nNaturalNumbers(n-1);
    int sum = sumnm1 + n;
}