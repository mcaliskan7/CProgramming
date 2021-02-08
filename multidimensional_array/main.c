#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;

    printf("Please enter row, column and group respectively: ");
    scanf("%d %d %d",&x,&y,&z);

    int arr[x][y][z];

    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            for(int k=0;k<z;k++){
                printf("%d. row %d. column %d. group: ",i+1,j+1,k+1);
                scanf("%d",&arr[i][j][k]);
            }
        }
    }

    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            for(int k=0;k<z;k++){
                printf("%d",arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
