#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter a number to see its times table: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("\n%d x %d = %d",i+1,n,(i+1)*n);
    }

    return 0;
}
