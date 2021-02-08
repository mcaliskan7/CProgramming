#include <stdio.h>

int main()
{
    int i,j,n,m;

    printf("Enter the number of rows and columns(even integer numbers):\n");
    scanf("%d%d",&n,&m);

    for (i=1;i<=n;i++) {

        for (j=1;j<=m-1;j++) {
            if (i==1 || i==n || j==1 || j==m-1) {
                printf("*");
            }
            else if (i==n/2 || j==m/2){
                printf("*");
            }
            else if(i==j){
                printf("*");
            }
            else if (j==n-i+1 || j==i+m/2-1) {
                printf("*");
            }
            else if (j==m/2+n-i) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
