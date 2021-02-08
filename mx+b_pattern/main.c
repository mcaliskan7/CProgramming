#include <stdio.h>
#include <stdlib.h>

//receives the number of lines and prints x and y
//x=1 for first line, x=1 and x=2 for second line, x=1, x=2, x=3 for third line ...
//y is calculated by y=mx+b

int main()
{
    int L;
    printf("Enter the number of lines: ");
    scanf("%d",&L);

    for(int i=0;i<L;i++){
        int m,b;
        printf("Enter m and b: ");
        scanf("%d %d",&m,&b);

        for(int x=1;x<=i+1;x++){
            int y=m*x+b;
            printf("(%d,%d)\t",x,y);
        }
        printf("\n");
    }
    return 0;
}
