#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("How many door are there?\n");
    scanf("%d",&a);

    int door[a];

    for(int i=0;i<a;i++){

        int b;
        printf("If the %d. door is open enter 1 or closed enter 0: ",i+1);
        scanf("%d",&b);

        if(b==1){
            door[i]=b;
        }
        else if(b==0){
            door[i]=b;
        }
        else {
            printf("Please enter a valid number! (1 or 0)");
            break;
        }

    }

    for(int i=0;i<a;i++){
        printf("%d\t",door[i]);
    }

    printf("\n");

    for(int step=1;step<=a;step++){


        for(int i=0;i<a;i++){

                if((i+1)%step==0){
                    door[i] = !door[i];
                }
        }

        for(int i=0;i<a;i++){
            printf("%d\t",door[i]);
        }

        printf("\n");

    }


    for(int i=0;i<a;i++){
        printf("%d\t",door[i]);
    }

    printf("\nThe open doors: ");

    for(int i=0;i<a;i++){
        if(door[i]==1){
            printf("%d  ",i+1);
        }
    }

    printf("\nThe closed doors: ");

    for(int i=0;i<a;i++){
        if(door[i]==0){
            printf("%d  ",i+1);
        }
    }
    return 0;
}
