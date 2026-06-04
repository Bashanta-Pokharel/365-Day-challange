#include <stdio.h>
#include <math.h>

/* Differential equation dy/dx = f(x, y) */
float f(float x, float y)
{
    return y + x * x * y;
}

int main()
{
    float x0, y0, xn, h;
    float x, y;
    float k1, k2;
    int n, i;

    /* Input */
    printf("Enter initial value x0: ");
    scanf("%f", &x0);

    printf("Enter initial value y0: ");
    scanf("%f", &y0);

    printf("Enter final value xn: ");
    scanf("%f", &xn);

    printf("Enter number of subintervals n: ");
    scanf("%d", &n);

    /* Step size */
    h = (xn - x0) / n;

    x = x0;
    y = y0;

    printf("\nOutput using RK-2 Method:\n");
    printf("Step\t x\t\t y\n");
    printf("---------------------------------\n");

    for (i = 1; i <= n; i++)
    {
        /* RK2 calculations */
        k1 = h * f(x, y);
        k2 = h * f(x + h, y + k1);

        y = y + (k1 + k2) / 2;
        x = x + h;

        printf("%d\t %.4f\t %.6f\n", i, x, y);
    }

    return 0;
}
