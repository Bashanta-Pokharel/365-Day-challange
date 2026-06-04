/* Lab 4: Fit a set of n data points to a straight line
   y = ax + b using the Least Squares Method */

#include <stdio.h>
#include <math.h>
#include <conio.h>  // Only needed if using getch()

int main() {
    float x[99], y[99];
    float sumx = 0, sumy = 0, sumxy = 0, sumx2 = 0;
    float a, b;
    int i, n;

    // Input: Number of data points
    printf("Enter the number of data, n = ");
    scanf("%d", &n);

    // Input: x values
    printf("\n----------------------------");
    printf("\nEnter x values:\n");
    for (i = 1; i <= n; i++) {
        printf("x[%d] = ", i);
        scanf("%f", &x[i]);
    }

    // Input: y values
    printf("Enter y values:\n");
    for (i = 1; i <= n; i++) {
        printf("y[%d] = ", i);
        scanf("%f", &y[i]);
    }

    // Calculate sums
    for (i = 1; i <= n; i++) {
        sumx += x[i];
        sumy += y[i];
        sumxy += x[i] * y[i];
        sumx2 += x[i] * x[i];
    }

    // Calculate slope (a) and intercept (b)
    a = (n * sumxy - sumx * sumy) / (n * sumx2 - sumx * sumx);
    b = (sumy - a * sumx) / n;

    // Output: Equation of the best fit line
    printf("\n----------------------------");
    printf("\nEquation of best fit line: y = %.4f * x + %.4f", a, b);
    printf("\n");

    // Optional pause if using Turbo C or similar
    // getch();  // Uncomment if needed

 
}
