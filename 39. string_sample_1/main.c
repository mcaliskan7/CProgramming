#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  char s[20]="this is c program";

  for(int i=0;i<strlen(s);i++){
    if(i==0 || s[i-1]==' '){
      if(s[i]=='t'){
        s[i]='T';
      }
      else if(s[i]=='i'){
        s[i]='I';
      }
      else if(s[i]=='c'){
        s[i]='C';
      }
      else if(s[i]=='p'){
        s[i]='P';
      }
    }
  }

  printf("%s",s);

  return 0;
}
