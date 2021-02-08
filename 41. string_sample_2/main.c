#include <stdio.h>
#include <string.h>

//the first and  last words have same number of characters
//program replaces first with last word

int main()
{
    char str[100];

    printf("Enter string: ");
    gets(str);

    int len=0;

    for(int i=0;i<strlen(str);i++){
        if(str[i]==' '){
        len=i;
        break;
        }
    }

    printf("%d\n",len);

    for(int j=0;j<len;j++){
        char temp=str[j];
        str[j]=str[strlen(str)-len+j];
        str[strlen(str)-len+j]=temp;
    }

    puts(str);

    return 0;
}
