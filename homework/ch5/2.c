#include<stdio.h>

int main()
{
    float a;
    float ans;
    printf("Enter value of trade: ");
    scanf("%f",&a);
    if(a < 2000)
    {
        ans = 50 + a * 0.02;
    }
    else if (a >= 2000 && a < 6000)
    {
        ans = 80 + a * 0.015;
    }
    else if (a >= 6000 && a <20000)
    {
        ans = 110 + a * 0.01;
    }
    else if (a >= 20000 && a <55000)
    {
        ans = 180 + a * 0.005;
    }
    else if (a >= 55000 && a <1000000)
    {
        ans = 200 + a * 0.0015;
    }
    else
    {
        ans = 250 + a * 0.0009;
    }
    if(ans <= 70)
    {
        ans = 70;
    }
    printf("Commission: $%.2f",ans);
    return 0;
}