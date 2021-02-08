#include <stdio.h>
#include <stdlib.h>

//this program works for four-digit numbers at most.

void findTheNumbersContainingX(int A[],int num,int x){
    int counter=0;
    for(int i=0;i<num;i++){
        int a=A[i]%10;
        int b=A[i]%100/10;
        int c=A[i]%1000/100;
        int d=A[i]%10000/1000;
        if(a==x || b==x || c==x || d==x){
            counter++;
            printf("\n%d. number has %d.",i+1,x);
        }
    }
    printf("\n\nThere are %d numbers containing %d.",counter,x);
}

int main()
{
    int n;
    printf("How many numbers are there in your array?: ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter %d. number of array: ",i+1);
        scanf("%d",&arr[i]);
    }

    int a;
    printf("Which number do you want to search?[Enter a number between 0 and 9 for digits]: ");
    scanf("%d",&a);

    findTheNumbersContainingX(arr,n,a);

    return 0;
}
