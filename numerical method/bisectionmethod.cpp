#include <stdio.h>
#include <math.h>

// Correct macro definition: use x*x*x instead of (x)(x)(x)
#define f(x) ((x)*(x)*(x) - 4*(x) - 9)

int main()
{
    float a, b, c, te;
    int i = 1; // Declare and initialize i properly

    printf("Enter the initial a: ");
    scanf("%f", &a);
    printf("Enter the initial b: ");
    scanf("%f", &b);
    printf("Enter the Tolerance error: ");
    scanf("%f", &te);

    printf("----------------------------------------------------------------------------------------------------------\n");
    printf("i\t\ta\t\tb\t\tc\t\tf(a)\t\tf(b)\t\tf(c)\n");
    printf("----------------------------------------------------------------------------------------------------------\n");

    // Bisection loop
    do
    {
        if (f(a) * f(b) < 0)
        {
            c = (a + b) / 2;
            printf("%d\t%f\t%f\t%f\t%f\t%f\t%f\n", i, a, b, c, f(a), f(b), f(c));
            printf("----------------------------------------------------------------------------------------------------------\n");

            
            
        }

        if (f(a) * f(c) < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }
        i++; // increasing by 1 
        

    } while (fabs(f(c)) > te);
    // output
    printf("------------------------------------------------------------------------------------------------------------");

    printf("\n\nAn approximate root c = %f\n", c);
    printf("f(c) = %f\n", f(c));

    return 0;
}
