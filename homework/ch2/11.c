#include<stdio.h>

int main()
{
    int d;
    int ans1;
    int ans2;
    int ans3;
    int ans4;
    scanf("%d",&d);
    if(d >= 20)
    {
        ans1 = d / 20;
        d = d % 20;
    }
    else
    {
        ans1 = 0;
    }

    if(d >= 10)
    {
        ans2 = d / 10;
        d = d % 10;
    }
    else
    {
        ans2 = 0;
    }

    if(d >= 5)
    {
        ans3 = d / 5;
        d = d % 5;
    }
    else
    {
        ans3 = 0;
    }
    ans4 = d;

    printf("%d %d %d %d" , ans1 , ans2 , ans3 , ans4);   
    return 0;
}