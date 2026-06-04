/* newton rapson method to find an approximation root of non linear equation 
   x log base(10)x -12 accurate to four decimal places using newton rapson method in c-programming */
#include<stdio.h>
#include<conio.h>
#include<math.h>

#define f(x) ((x)*log10(x)-12)              // input
#define g(x) (log10(exp(1)) + log10(x))   // derivative of f(x)

int main(){
    float x0, x1, Te;
    int i = 0;
    printf("enter the initial guess, x0=");
    scanf("%f", &x0);
    printf("enter the tolerance Error, Te=");
    scanf("%f", &Te);

    printf("-------------------------------------------------------------------------------------\n");
    printf("i\t\tx0\t\tf(x0)\t\tg(x0)\t\tx1\t\tf(x1)\n");
    printf("-------------------------------------------------------------------------------------\n");

    // operation
    do {
        x1 = x0 - f(x0)/g(x0);

        // print BEFORE updating x0
        printf("%d\t%f\t%f\t%f\t%f\t%f\n", i, x0, f(x0), g(x0), x1, f(x1));
        i++;

        x0 = x1;

    } while(fabs(f(x1)) > Te);

    printf("-------------------------------------------------------------------------------------\n");
    // output
    printf("An approximation root ,x1 = %f\n", x1);
    printf("f(x1) = %f\n", f(x1));

}