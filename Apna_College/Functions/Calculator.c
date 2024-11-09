#include<stdio.h>
double sum(double a, double b);
double product(double a, double b);
double subtract(double a, double b);
double division(double a, double b);

double display(double val, char c);

int main() {
    system("CLS");
    double a, b;
    int c; 
    int typ;
    double s;

    printf("Enter 1st value : ");
    scanf("%lf", &a);
    printf("Enter 2nd value : ");
    scanf("%lf", &b);

    printf("1.)Perform Addition\n2.)Perform Subtraction\n3.)Perform Multiplication\n4.)Perform Division\n");
    scanf("%d", &c);

    switch(c) {
        case 1:
            s = sum(a,b); //Argument/Actual Parameter
            typ = 'S';
            display(s,typ); //Argument/Actual Parameter
            break;
        case 2:
            s = subtract(a,b); //Argument/Actual Parameter
            typ = 's';
            display(s,typ); //Argument/Actual Parameter
            break;
        case 3:
            s = product(a,b); //Argument/Actual Parameter
            typ = 'm';
            display(s,typ); //Argument/Actual Parameter
            break;
        case 4:
            s = division(a,b); //Argument/Actual Parameter
            typ = 'd';
            display(s,typ); //Argument/Actual Parameter
            break;
        default:
            printf("EYE CHECKUP!!");
    }

    return 0;
}

double sum(double a, double b) { //Parameter/Formal Parameter
    return a+b;
}

double subtract(double a, double b) { //Parameter/Formal Parameter
    return a-b;
}

double product(double a, double b) { //Parameter/Formal Parameter
    return a*b;
}

double division(double a, double b) { //Parameter/Formal Parameter
    return a/b;
}

double display(double val, char c) { //Parameter/Formal Parameter
    if(c == 'S') {
        printf("Result on addition = %lf", val);
    }
    if(c == 's') {
        printf("Result on Subtraction = %lf", val);
    }
    if(c == 'm') {
        printf("Product of the two numbers = %lf", val);
    }
    if(c == 'd') {
        printf("Result on division = %lf", val);
    }
    return 0;
}