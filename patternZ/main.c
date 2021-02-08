#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int n=7;

  for(int i=0;i<n;i++){
    if(i==0 || i==n-1){
      for(int j=0;j<n;j++){
        printf("*");
      }
    }
    else {
      for(int j=0;j<n-i-1;j++){
        printf(" ");
      }
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
