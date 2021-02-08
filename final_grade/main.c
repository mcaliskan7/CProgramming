#include <stdio.h>

int grade(int mid, int fin)
{
    double std_ave = 0.4 * mid + 0.6 * fin;
    return std_ave;
}

int main()
{
    for( int i=1;i<=40;i++)
    {
        int a[40], b[40];
        double c[40], total_ave=0;

        printf("Enter the midterm and final grade of %d. student:\n",i);
        scanf("%d%d",&a[i],&b[i]);

        c[i] = grade(a[i],b[i]);
        total_ave = (total_ave + c[i]) / i;
    }

    for(int i=1;i<=40;i++)
    {
        double c[i], total_ave;

        if(c[i]<total_ave)
        {
            printf("%d. student failed.\n",i);
        }
        else
        {
            printf("%d. student passed.\n",i);
        }
    }
    return 0;
}
