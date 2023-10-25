#include<stdio.h>

int main()
{
    int a;
    printf("Enter wind speed (knots): ");
    scanf("%d",&a);
    if(a < 1)
    {
        printf("Wind force at %d knots is Calm",a);
    }
    else if (a<=3)
    {
        printf("Wind force at %d knots is Light air",a);
    }
    else if (a<=27)
    {
        printf("Wind force at %d knots is Breeze",a);
    }
    else if (a<=47)
    {
        printf("Wind force at %d knots is Gale",a);
    }
    else if (a<=63)
    {
        printf("Wind force at %d knots is Storm",a);
    }
    else
    {
        printf("Wind force at %d knots is Hurricane",a);
    }
    return 0;
}