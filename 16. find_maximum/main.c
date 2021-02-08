#include <stdio.h>
#include <stdlib.h>

int find_maximum(int x[],int y){
    int max=0;
    for(int i=0;i<y;i++){
        if(x[i]>max){
            max=x[i];
        }
    }
    printf("%d",max);
}

int main()
{
    int n;
    printf("How many number does the array contain?: ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        printf("Please enter the %d. number of the array: ",i+1);
        scanf("%d",&arr[i]);
    }

    find_maximum(arr,n);

    return 0;
}
