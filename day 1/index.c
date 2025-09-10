#include <stdio.h>

int main()
{
    float PI = 3.14;
    float radius;

    printf("enter the radius of the circle");
    scanf("%f", & radius);
    float area =PI*radius*radius;
    printf("the area of the circle with result %f is :%f\n",radius,area);


    return 0;
}