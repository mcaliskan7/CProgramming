#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int n=7;

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(j==0 || j==n-1 || j==i){
        printf("*");
      }
      else {
        printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}
