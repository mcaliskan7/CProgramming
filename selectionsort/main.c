#include <stdio.h>
#include <stdlib.h>

void selectionsort(int arr[],int n){
    for(int i=0;i<n;i++){
        int least=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[least]){
                int temp=arr[j];
                arr[j]=arr[least];
                arr[least]=temp;
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

    selectionsort(A,num);

    printf("\n");

    for(int i=0;i<num;i++){
        printf("%d  ",A[i]);
    }

    return 0;
}
