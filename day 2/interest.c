#include <stdio.h>

int main()
{
    int p;
    int r;
    int n;
    scanf("%d", &p);
    scanf("%d", &r);
    scanf("%d", &n);
    float value =p*r*n/100.0;
    printf("Write a Program to find the area of a interest.\n");
    printf("Use Formula: ");
    printf("%d %d %d %f",p,r,n,value);

    return 0;
}