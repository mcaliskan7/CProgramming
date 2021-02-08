#include <stdio.h>
#include <stdlib.h>

int linearsearch(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            printf("The given number is at %d. index and it is %d. number of the array.",i,i+1);
            return 0;
        }
    }
}

int main()
{
    int num,a;
    printf("How many numbers are there in your array? : ");
    scanf("%d",&num);

    int A[num];

    for(int i=0;i<num;i++){
        printf("Enter %d. number of your array: ",i+1);
        scanf("%d",&A[i]);
    }

    printf("Which number do you want to search? : ");
    scanf("%d",&a);


    if(linearsearch(A,num,a)!=0){
        printf("The given number is not at your array. Please enter another value: ");
    }

    return 0;
}
