#include<stdio.h>

int main()
{
    int n1,n2,n3;

    printf("Please enter a value:\n");
    scanf("%d",&n1);

    n1++;
    n2 = n1+3;
    n3 = n2+5;

    printf("The number you give is %d, the second number is %d and the third number is %d.",n1,n2,n3);

    return 0;
}
