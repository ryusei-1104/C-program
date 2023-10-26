#include<stdio.h>

int main()
{
    int a;
    int b;
    int temp;
    printf("Enter two integers: ");
    scanf("%d %d",&a,&b);
    if(a > b)
    {
        temp = b;
        b = a;
        a = temp;
    }
    while(a != 0)
    {
        temp = a;
        a = b % a;
        b = temp;
    }
    printf("Greatest common divisor: %d",b);
    return 0;
}