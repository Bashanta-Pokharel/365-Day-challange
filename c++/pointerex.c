#include <stdio.h>

int main() {
    int num = 10;
    int *ptr;

    ptr = &num;  // Store the address of num in ptr

    printf("Value of num = %d\n", num);
    printf("Address of num = %p\n", (void *)&num);
    printf("Pointer ptr stores = %p\n", (void *)ptr);
    printf("Value pointed to by ptr = %d\n", *ptr);

    return 0;
}