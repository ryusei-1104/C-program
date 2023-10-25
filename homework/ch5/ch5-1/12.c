#include<stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int max;
    scanf("%d %d %d",&a,&b,&c);
    max = a;
    if(b > max)
    {
        max = b;
        if(c > max)
        {
            max = c;
        }
    }
    else
    {
        if(c > max)
        {
            max = c;
        }
    }
    if(a == 0 || b == 0 || c == 0)
    {
        printf("0");
    }
    else if(max == a)
    {
        if(b * b + c * c == a * a)
        {
            printf("%d",max);
        }
        else
        {
            printf("0");
        }
    }
    else if(max == b)
    {
        if(a * a + c * c == b * b)
        {
            printf("%d",max);
        }
        else
        {
            printf("0");
        }
    }
    else
    {
        if(b * b + a * a == c * c)
        {
            printf("%d",max);
        }
        else
        {
            printf("0");
        }
    }
    return 0;
}