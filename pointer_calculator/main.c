#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float add(float *p , float *q){
    return *p+*q;
}
float substr(float *p , float *q){
    return *p-*q;
}
float multiply(float *p , float *q){
    return *p**q;
}
float divide(float *p , float *q){
    return *p/(*q);
}
float exponent(float *p , float *q){
    return pow(*p,*q);
}

int main()
{
    float x,y;

    printf("Enter two numbers: ");
    scanf("%f %f",&x,&y);

    printf("%f\n",add(&x,&y));
    printf("%f\n",substr(&x,&y));
    printf("%f\n",multiply(&x,&y));
    printf("%f\n",divide(&x,&y));
    printf("%f\n",exponent(&x,&y));

    return 0;
}
