/*lab5: to implement lagrange's interpolation formula for estimating data from n discreate points 
 in c programming*/
 //(2,1),(3,4),(4,7) and (8,9) interpolate x= 6
 #include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    float X[99], Y[99], x0, y0 = 0, term;
    int i, j, n;

    // input
    printf("Enter no of data,n=");
    scanf("%d", &n);
    printf("Enter the value of x and y:\n");
    for(i = 0; i < n; i++){
        printf("X[%d] = ", i);
        scanf("%f", &X[i]);
        printf("Y[%d] = ", i);
        scanf("%f", &Y[i]);
    }

    printf("Enter x0=");
    scanf("%f", &x0);

    // processing
    for(i = 0; i < n; i++){
        term = Y[i];
        for(j = 0; j < n; j++){
            if(j != i)
                term = term * (x0 - X[j]) / (X[i] - X[j]);  // Corrected this line
        }
        y0 = y0 + term;
    }

    // output
    printf("The value of y(%f) = %f", x0, y0);

    return 0;
}
