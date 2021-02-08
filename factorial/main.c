// calculating the factorial of a given number

#include<stdio.h>

int main ()
{
    int num,fact,given_number;

    printf("Enter a number to calculate its factorial:\n");
    scanf("%d",&num);

    given_number=num;
    fact=1;

    if(num==0) {
        fact*=1;
        printf("The factorial of %d is %d.",num,fact);
    }
    else if (num<0) {
        printf("Enter a positive integer number or zero!");
    }
    else {
        while(num>0) {
            fact*=num;
            num--;
        }
        printf("The factorial of %d is %d.",given_number,fact);
    }
    return 0;
}
