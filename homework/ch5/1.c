#include<stdio.h>

int main()
{
    float a;
    float ans;
    printf("Enter value of trade: ");
    scanf("%f",&a);
    if(a < 2500)
    {
        ans = 30 + a * 0.017;
    }
    else if (a >= 2500 && a < 6250)
    {
        ans = 56 + a * 0.0066;
    }
    else if (a >= 6250 && a <20000)
    {
        ans = 76 + a * 0.0034;
    }
    else if (a >= 20000 && a <50000)
    {
        ans = 100 + a * 0.0022;
    }
    else if (a >= 50000 && a <500000)
    {
        ans = 155 + a * 0.0011;
    }
    else
    {
        ans = 255 + a * 0.0009;
    }
    if(ans <= 39)
    {
        ans = 39;
    }
    printf("Commission: $%.2f",ans);
    return 0;
}