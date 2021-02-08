#include <stdio.h>

int main ()
{
    int x;
    char color;

    printf("Enter the value:\n");
    scanf("%d",&x);
    printf("Enter the color:\n");
    scanf(" %c",&color);

    if ( x>=0 && x<=10)
    {
        if (color == 'R')
        {
            printf("correct color.");
        }
        else
        {
            printf("wrong color!");
        }
    }
    else if ( x>=11 && x<=20)
    {
        if (color == 'G')
        {
            printf("correct color.");
        }
        else
        {
            printf("wrong color!");
        }
    }
    else
    {
        printf("out of range!");
    }

    return 0;
}
