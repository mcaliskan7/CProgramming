#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    double sum=0,ave;

    printf("How many numbers does the array contain?: ");
    scanf("%d",&n);

    double numbers[n];

    for(int i=0;i<n;i++){
        printf("\nPlease enter the %d. number: ",i+1);
        scanf("%lf",&numbers[i]);

        sum+=numbers[i];
    }

    ave=sum/n;

    printf("\nSUM: %.3lf  and AVERAGE: %.3lf",sum,ave);
    return 0;
}
