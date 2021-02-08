#include <stdio.h>
#include <stdlib.h>

//firstly, sorts the numbers by increasing order; then finds the new index of the given number.

void bublesort(int A[],int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            if(A[j-1]>A[j]){
                int temp=A[j];
                A[j]=A[j-1];
                A[j-1]=temp;
            }
        }
    }
}

int binarysearch(int A[],int n,int a){
    int medium=n/2+1;
    for(int i=0;i<n;i++){
        if(a==A[medium])
            return medium;
        else if(a<A[medium])
            medium-=1;
        else if(a>A[medium])
            medium+=1;
    }
}

int main()
{
    int num,x;
    printf("How many numbers are there in your array? : ");
    scanf("%d",&num);

    int arr[num];

    for(int i=0;i<num;i++){
        printf("Enter %d. number of your array: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Which number do you want to search? : ");
    scanf("%d",&x);

    bublesort(arr,num);

    for(int i=0;i<num;i++){
        printf("%d  ",arr[i]);
    }

    int k=binarysearch(arr,num,x);

    printf("\nThe given number is at %d. index and it is %d. number of your array.",k,k+1);

    return 0;
}
