#include <stdio.h>
#include <stdlib.h>

void list_name(char name_list[][30],int n){
    for(int i=0;i<n;i++){
        printf("%s",name_list[i][30]);
    }
}

int main()
{
    int x;
    printf("How many people are there in the list?: ");
    scanf("%d",&x);

    char arr[x][30];

    for(int i=0;i<x;i++){
        printf("Please enter the name of %d. person: ",i+1);
        scanf("%s",arr[i]);
    }

    list_name(arr,x);

    return 0;
}
