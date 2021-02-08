#include <stdio.h>
#include <stdlib.h>

void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]<arr[j]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
}

int main()
{
    int num;
    printf("How many numbers are there in your array? : ");
    scanf("%d",&num);

    int A[num];

    for(int i=0;i<num;i++){
        printf("Enter %d. number of the array: ",i+1);
        scanf("%d",&A[i]);
    }

    for(int i=0;i<num;i++){
        printf("%d  ",A[i]);
    }

    insertionsort(A,num);

    printf("\n");

    for(int i=0;i<num;i++){
        printf("%d  ",A[i]);
    }

    return 0;
}
