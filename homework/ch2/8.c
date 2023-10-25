#include<stdio.h>
#define pi 3.14159f

int main()
{
    float r;
    float v;
    scanf("%f",&r);
    v = pi * 4 / 3 * r * r * r;
    printf("%.2f", v);
    return 0;
}