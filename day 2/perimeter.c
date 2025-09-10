#include <stdio.h> 

int main()
{
    int radius;
    float PI = 3.14;
    scanf("%d", &radius);


    float value = 2*PI*radius;
    printf("Write a Program to find the area of perametter of circle.\n");
    printf("Use Formula: ");
    printf("%d %f",radius,value);

    return 0;
}