#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Arithmetic Operators
    printf("\n--- Arithmetic Operators ---\n");
    printf("Addition = %d\n", a + b);
    printf("Subtraction = %d\n", a - b);
    printf("Multiplication = %d\n", a * b);
    printf("Division = %d\n", a / b);
    printf("Modulus = %d\n", a % b);

    // Relational Operators
    printf("\n--- Relational Operators ---\n");
    printf("a > b = %d\n", a > b);
    printf("a < b = %d\n", a < b);
    printf("a == b = %d\n", a == b);
    printf("a != b = %d\n", a != b);

    // Logical Operators
    printf("\n--- Logical Operators ---\n");
    printf("(a > 0 && b > 0) = %d\n", (a > 0 && b > 0));
    printf("(a > 0 || b > 0) = %d\n", (a > 0 || b > 0));
    printf("!(a > b) = %d\n", !(a > b));

    // Assignment Operators
    printf("\n--- Assignment Operators ---\n");
    int x = a;

    x += b;
    printf("x += b = %d\n", x);

    x -= b;
    printf("x -= b = %d\n", x);

    // Increment and Decrement
    printf("\n--- Increment/Decrement ---\n");
    printf("a = %d\n", a);

    a++;
    printf("a++ = %d\n", a);

    a--;
    printf("a-- = %d\n", a);

    return 0;
}