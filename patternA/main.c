#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int n=7;
  for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
      printf(" ");
    }
    if(i==n/2-1/2){
      for(int k=0;k<2*i+1;k++){
        printf("*");
      }
    }
    else {
      int t=0;
      printf("*");
      do{
        printf(" ");
        t++;
      }while(t<2*i-1);
      if(i!=0){
        printf("*");
      }
    }
    printf("\n");
  }
  return 0;
}
