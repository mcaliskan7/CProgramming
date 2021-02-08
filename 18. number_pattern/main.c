#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i=2;i<=n;i++){
        int b=i;
        for(int j=0;j<i;j++){
            printf("%d\t",b);
            b=2*b+1;
        }
        printf("\n");
    }

    return 0;
}
