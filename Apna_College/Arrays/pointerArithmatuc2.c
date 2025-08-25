# include <stdio.h>

int main() {
    system("CLS");
    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;
    printf("ptr = %u\n_ptr = %u\n", ptr, _ptr);
    printf("difference = %u\n", *_ptr - *ptr);
    _ptr = &age;
    printf("comparison = %u\n", ptr == _ptr);
    return 0;
}