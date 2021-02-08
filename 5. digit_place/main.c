#include<stdio.h>

int main()
{
    int n1,n2,n3,n4,n5,number;

    printf("Enter a five-digit number:\n");
    scanf("%d",&number);

    n1 = number / 10000;
    n2 = number / 1000 % 10 ;
    n3 = number / 100 % 10;
    n4 = number / 10 % 10;
    n5 = number % 10;

    printf("%d      %d      %d      %d      %d",n1,n2,n3,n4,n5);

    return 0;
}
