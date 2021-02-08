#include <stdio.h>
#include <stdlib.h>

int twoDigitNumbers(int x){
    int a=x%10;
    int b=x%100/10;

    return a+b;
}

int main()
{
    int num,sum=0;

    do{
        printf("Enter a number with 2 digits[Enter 0 to stop]: ");
        scanf("%d",&num);
        int k=twoDigitNumbers(num);
        sum+=k;
    }while(num!=0);

    printf("The sum of digits: %d",sum);

    return 0;
}
