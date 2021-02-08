#include <stdio.h>
#include <stdlib.h>

//the program stops when 0 is entered.

int main()
{
    float num,i=0,sum=0;

    do{
        printf("Enter %.0f. number: ",i+1);
        scanf("%f",&num);
        sum+=num;
        i++;
    }while(num!=0);

    float average=sum/(i-1);

    printf("The sum:%.2f    The average:%.3f    ",sum,average);

    return 0;
}
