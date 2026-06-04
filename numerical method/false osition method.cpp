 /*lAB2: to find an approximation root of non-Linear equation
x e^x-cos x =0 accurate to four decimal places using False-Position (regula-False)
method in c programming*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) ((x)*exp(x)-cos(x)) //input

int main() {
    float x1, x2, x3, Te;
    int i = 0;
    //inputs
    printf("Enter the x1 =");
    scanf("%f", &x1);
    printf("Enter the x2 =");
    scanf("%f", &x2);
    printf("Enter the Tolerance error, Te =");
    scanf("%f", &Te);

    printf("----------------------------------------------------------------------------------------------------------\n");
    printf("i\t\tx1\t\tx2\t\tx3\t\tf(x1)\t\tf(x2)\t\tf(x3)\n");
    printf("----------------------------------------------------------------------------------------------------------\n");

    //operation
    do {
        if (f(x1) * f(x2) < 0) {
            x3 = (x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1));
            printf("%d\t%f\t%f\t%f\t%f\t%f\t%f\n", i, x1, x2, x3, f(x1), f(x2), f(x3));
            printf("----------------------------------------------------------------------------------------------------------\n");
        }

        if (f(x1) * f(x3) < 0)
            x2 = x3;
        else
            x1 = x3;

        i++;
    } while (fabs(f(x3)) > Te);

    //output
    printf("Root is , x3 = %f\n", x3);
    printf("f(x3)=%f", f(x3));
    
    

}
