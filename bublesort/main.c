#include <stdio.h>
#include <stdlib.h>

void bublesort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            if(arr[j-1]>arr[j]){
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }
}

int main()
{
    int num;
    printf("How many number are there in your array? : ");
    scanf("%d",&num);

    int A[num];

    for(int i=0;i<num;i++){
        printf("Enter %d. number of the array: ",i+1);
        scanf("%d",&A[i]);
    }

    printf("\n");

    for(int j=0;j<num;j++){
        printf("%d  ",A[j]);
    }

    printf("\n");

    bublesort(A,num);

    for(int j=0;j<num;j++){
        printf("%d  ",A[j]);
    }


    return 0;
}
