#include<stdio.h>
#define PI 3.14
int main()
{
    int rec1,rec2,c;
    float rad;

    printf("Please enter the length of rectangle's sides, cube's side and the circle's radius:\n");
    scanf("%d%d%d%f",&rec1,&rec2,&c,&rad);

    int a_rectangle,v_cube;
    float s_circle,a_circle;

    a_rectangle = rec1 * rec2;
    v_cube = c * c * c;
    s_circle = 2 * PI * rad;
    a_circle = PI * rad * rad;

    printf("The area of rectangle is %d\nThe volume of cube is %d\nThe sphere of circle is %.2f\nThe area of circle is %.2f\n",a_rectangle,v_cube,s_circle,a_circle);

    return 0;
}
