#include <stdio.h>
#include <stdlib.h>

struct  student {
        unsigned long int no;
        char name[20];
        char surname[20];
        int section;
    };

float findCPGA(int a,int b,int c) {
    float k= a*3/10 + b*3/10 + c*4/10;
    return k;
}

int main()
{
    int n;
    printf("How many students are there in class: ");
    scanf("%d",&n);

    struct student students[n];
    char letters[n];

    for(int i=0;i<n;i++){
        int mid1, mid2, fin;

        printf("Enter %d. student's midterm 1, midterm 2 and final grades:",i+1);
        scanf("%d %d %d",&mid1,&mid2,&fin);

        float grade=findCPGA(mid1,mid2,fin);
        if(grade>=85) { letters[i]='A'; }
        else if(grade>=70) { letters[i]='B'; }
        else if(grade>=55) { letters[i]='C'; }
        else if(grade>=40) { letters[i]='D'; }
        else { letters[i]='F';}
    }

    for(int i=0;i<n;i++){
        printf("\nEnter %d. student's no, name, surname and section:",i+1);
        scanf("%lu %s %s %d",&students[i].no,students[i].name,students[i].surname,&students[i].section);
    }

    for(int i=0;i<n;i++){
        printf("%lu\t%s\t%s\t%d\t%c\n",students[i].no,students[i].name,students[i].surname,students[i].section,letters[i]);
    }
    return 0;
}
