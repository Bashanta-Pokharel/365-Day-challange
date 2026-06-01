#include <stdio.h>

int main() {
    int a, b, c, d;
    int largest, smallest;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    largest = (a > b) ? a : b;
    largest = (largest > c) ? largest : c;
    largest = (largest > d) ? largest : d;

    smallest = (a < b) ? a : b;
    smallest = (smallest < c) ? smallest : c;
    smallest = (smallest < d) ? smallest : d;

    printf("Largest number = %d\n", largest);
    printf("Smallest number = %d\n", smallest);

    return 0;
}