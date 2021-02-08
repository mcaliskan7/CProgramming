#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x;
    printf("Enter x value: ");
    scanf("%lf",&x);

    double sum=0.0;
    for(double n=2.0;n<=30.0;n++){
        sum+=(n*(n-1.0)*pow(x,n-2.0))/2.0;
    }

    printf("The result is %lf",sum);

    return 0;
}
