#include<stdio.h>


int main()
{
    float s;
    float p;
    float a;
    float ans1;
    float ans2;
    printf("Enter the number of shares: ");
    scanf("%f",&s);
    printf("Enter price per share: ");
    scanf("%f",&p);
    a = s * p;
     if(a < 2500)
    {
        ans1 = 30 + a * 0.017;
    }
    else if (a >= 2500 && a < 6250)
    {
        ans1 = 56 + a * 0.0066;
    }
    else if (a >= 6250 && a <20000)
    {
        ans1 = 76 + a * 0.0034;
    }
    else if (a >= 20000 && a <50000)
    {
        ans1 = 100 + a * 0.0022;
    }
    else if (a >= 50000 && a <500000)
    {
        ans1 = 155 + a * 0.0011;
    }
    else
    {
        ans1 = 255 + a * 0.0009;
    }
    if(ans1 <= 39)
    {
        ans1 = 39;
    }
    if (s < 2000)
    {
       ans2 = 33 + s * 0.03; 
    }
    else
    {
        ans2 = 33 + s * 0.02;
    }
    printf("Original broker's commission: $%.2f\n",ans1);
    printf("Rival broker's commission: $%.2f",ans2);
    return 0;
}