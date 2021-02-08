#include<stdio.h>

int main () {

    int i,j,n,m;

    printf("Enter the number of rows and columns:\n");
    scanf("%d%d",&n,&m);

    for (i=0;i<=n;i++){


        for (j=0;j<=m;j++) {

            if (i%4 == 0 || j%5 == 0){
                  printf("*");
            }
            else {
                printf (" ");
            }
        }
        printf("\n");

    }

    return 0;

}
