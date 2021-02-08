#include<stdio.h>

int main()
{
    int x,area;

    printf("Please enter the length of a side of square:\n");
    scanf("%d",&x);

    area = x * x;

    printf("\nThe area of square is %d",area);

    return 0;
}
