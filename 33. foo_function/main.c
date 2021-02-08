#include <stdio.h>
#include <math.h>

double foo(double x, double y, double z)
{
    if (z != 0)
    {
        double r1,r2,result;
        r1 = pow(x+1.0,1.0/3.0);
        r2 = y/2.0;
        result = (r1-r2)/z;

        return result;
    }
    else
    {
        return 0;
    }
}

int main()
{
    double a,b,c;
    printf("Enter three numbers:");
    scanf("%lf%lf%lf",&a,&b,&c);

    foo(a,b,c);

    printf("The result is %lf.",foo(a,b,c));

    return 0;
}
