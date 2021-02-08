#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char password[100];
    char password2[100];

    printf("Please enter a password: ");
    gets(password);

    printf("Please enter the password again: ");
    gets(password2);

    int a=1;
    int b=strlen(password);
    int c=strlen(password2);
    int i;


    if(b==c){
        for(i=0;i<b;i++){
            if(password[i]!=password2[i]){
                a=0;
                break;
            }
        }
    }
    else {
        a=0;
    }

    if(a==1){
        printf("The passwords are the same. Password verification was completed.");
    }
    else{
        printf("The passwords are different. Please try again.");
    }


    return 0;
}
