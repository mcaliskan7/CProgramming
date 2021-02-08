#include<stdio.h>

int main()
{
    float n1,n2,n3,greatest,least;

    printf("Enter three different positive numbers:\n");
    scanf("%f%f%f",&n1,&n2,&n3);

    greatest = 0;
    least = 0;

    if (n1 > 0 && n2 > 0 && n3 > 0) {
            if (n1 > greatest){
                greatest = n1;
                least = n1;

                if (n2 > n1){
                    greatest = n2;

                    if (n2 > n3){
                            if (n3 > n1){
                                least = n1;
                            }
                            else {
                                least = n3;
                            }
                    }
                    else {
                        greatest = n3;
                    }
                }
                else if (n3 > n1) {
                    least = n2;
                    greatest = n3;
                }
                else {
                    if (n2 > n3) {
                    least = n3;
                    }
                    else {
                        least = n2;
                    }
                }

                printf("The least one is %.2f and the greatest one is %.2f.",least,greatest);
            }
    }
    else {
        printf("Please enter valid numbers.(positive)");
    }

    return 0;
}
