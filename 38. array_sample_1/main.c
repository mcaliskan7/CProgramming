#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d",&n);

  for(int i=2;i<=n;i++){
    printf("%d\t",i);
    for(int j=1;j<i;j++){
      printf("%d\t",i+(2*j-1)*(i+1));
    }
    printf("\n");
  }
  return 0;
}
