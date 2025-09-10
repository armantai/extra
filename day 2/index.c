#include <stdio.h>

int main()
{
    int abcd;
    float PI = 3.14;
    scanf("%d",& abcd);
    float area = PI*abcd*abcd;
    printf("Write a Program to find the area of a circle\n");
    printf("Use Formula: ");
    printf("%d %f",abcd,area);

    return 0;
}