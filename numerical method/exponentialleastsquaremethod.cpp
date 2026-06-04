/* Lab: Fit the set of n data to y = a * b^x using least squares method */

#include <stdio.h>
#include <math.h>
// #include <conio.h> // Optional, not used here

int main() {
    float x[99], y[99], logy[99];
    float sumx = 0, sumlogy = 0, sumxlogy = 0, sumx2 = 0;
    float A, B, a, b;
    int i, n;

    // Input
    printf("Enter the number of data, n = ");
    scanf("%d", &n);

    printf("\nEnter values of x and y:\n"); 
    for (i = 1; i <= n; i++) {
        printf("x[%d] = ", i);
        scanf("%f", &x[i]);
    }

    printf("Enter corresponding y values:\n");
    for (i = 1; i <= n; i++) {
        printf("y[%d] = ", i);
        scanf("%f", &y[i]);

        if (y[i] <= 0) {
            printf("Error: y must be > 0 for log(y) to be defined.\n");
            return 1;
        }

        logy[i] = log10(y[i]); // Taking log base 10
    }

    // Calculations
    for (i = 1; i <= n; i++) {
        sumx += x[i];
        sumlogy += logy[i];
        sumxlogy += x[i] * logy[i];
        sumx2 += x[i] * x[i];
    }

    B = (n * sumxlogy - sumx * sumlogy) / (n * sumx2 - sumx * sumx);
    A = (sumlogy - B * sumx) / n;

    a = pow(10, A);
    b = pow(10, B);

    // Output
    printf("\n----------------------------\n");
    printf("Fitted exponential curve: y = %.4f * %.4f^x\n", a, b);

    return 0;
}
