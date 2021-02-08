#include<stdio.h>

int main()
{
    int number;
    float price;

    printf("Enter the number of product you want to purchase:\n");
    scanf("%d",&number);

    if (number >= 1 && number < 100){
        price = 5 * number;

        printf("The total price you will pay is %.0f",price);
    }
    else if (number >= 100 && number < 200){
        price = 2.5 * number;

        printf("The total price you will pay is %.1f",price);
    }
    else if (number >= 200 && number < 400){
        price = 1.25 * number;

        printf("The total price you will pay is %.2f",price);
    }
    else if (number >= 400){
        price = 0.75 * number;

        printf("The total price you will pay is %.2f",price);
    }
    else {
        printf("Please enter a valid value!");
    }

    return 0;
}
