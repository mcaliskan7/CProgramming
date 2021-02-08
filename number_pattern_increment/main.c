#include <stdio.h>
#include <stdlib.h>

//receives a number and increment for every term
//prints 20 numbers as n n+increment n+2*increment ...

int main()
{
    int n, increment;
    printf("Enter n and increment: ");
    scanf("%d%d",&n,&increment);

    int i=0;
    while(i<20){
        printf("%d ",n+i*increment);
        i++;
    }

    return 0;
}
