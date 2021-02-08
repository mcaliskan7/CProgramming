#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int array1[10];

  for(int i=0;i<10;i++){
    printf("Enter %d. number: ",i+1);
    scanf("%d",&array1[i]);
  }

  int array2[10];

  for(int j=0;j<10;j++){
    array2[j]=array1[9-j];
  }

  for(int k=0;k<10;k++){
    printf("%d  ",array2[k]);
  }

  return 0;
}
