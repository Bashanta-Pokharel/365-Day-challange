#include <stdio.h>

// Function declarations
void callByValue(int num);
void callByReference(int *ptr);

int main() {
    int number = 10;

    printf("Original value: %d\n\n", number);

    // Call by Value
    callByValue(number);
    printf("After Call by Value: %d\n\n", number);

    // Call by Reference
    callByReference(&number);
    printf("After Call by Reference: %d\n", number);

    return 0;
}

// Function using Call by Value
void callByValue(int num) {
    num = 20;
    printf("Inside Call by Value: %d\n", num);
}

// Function using Call by Reference
void callByReference(int *ptr) {
    *ptr = 50;
    printf("Inside Call by Reference: %d\n", *ptr);
}