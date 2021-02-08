#include <stdio.h>
#include <stdlib.h>

//defines a function that receives an array and its size
//inside function, the largest monotone increasing number series is calculated
//A[15]={3,4,5,9,7,6,1,2,3,4,5,8,6,7,6} the result is 6

int foo(int A[],int size){
    int k=1;
    for(int i=0;i<size;i++){
        int count=1;
        for(int j=i+1;j<size;j++){
            if(A[j]>A[j-1]){
                count++;
            }
            else {
                i=j+1;
                break;
            }
            if(count>k){
                k=count;
            }
        }
    }
    return k;
}

int main()
{
    int arr[12];
    for(int i=0;i<12;i++){
        printf("Enter %d. number of array: ",i+1);
        scanf("%d",&arr[i]);
    }
    int result=foo(arr,12);
    printf("The largest monoton increasing number serie has %d elements.",result);

    return 0;
}
