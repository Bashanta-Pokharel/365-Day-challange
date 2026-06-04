#include <stdio.h>
#include <math.h>

int main()
{
float x0 = 0, y0 = 0, z0 = 0;
float x1, y1, z1;
float e = 0.0001;
int step = 1;

printf("Jacobi Iteration Method\n\n");  
printf("Step\t x\t\t y\t\t z\n");  

do  
{  
    x1 = (32 - 4*y0 + z0) / 12;  
    y1 = (24 - x0 - 10*z0) / 13;  
    z1 = (35 - 2*x0 - 17*y0) / 14;  

    printf("%d\t %.6f\t %.6f\t %.6f\n", step, x1, y1, z1);  

    if (fabs(x1 - x0) < e &&  
        fabs(y1 - y0) < e &&  
        fabs(z1 - z0) < e)  
        break;  

    x0 = x1;  
    y0 = y1;  
    z0 = z1;  

    step++;  

} while (step <= 50);  

printf("\nFinal Solution\n");  
printf("x = %.6f\n", x1);  
printf("y = %.6f\n", y1);  
printf("z = %.6f\n", z1);  

return 0;

}