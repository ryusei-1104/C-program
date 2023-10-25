#include<stdio.h>

int main()
{
    float i;
    float tax;
    printf("Enter amount of taxable income: ");
    scanf("%f",&i);
    if (i <= 750)
    {
        tax = i * 0.01;
    }
    else if (i <= 2250)
    {
        tax = 7.50f + (i - 750) * 0.02;
    }
    else if (i <= 3750)
    {
        tax = 37.50f + (i - 2250) * 0.03;
    }
    else if (i <= 5250)
    {
        tax = 82.50f + (i - 3750) * 0.04;
    }
    else if (i <= 7000)
    {
        tax = 142.50f + (i - 5250) * 0.05;
    }
    else
    {   
        tax = 230.00f + (i - 7000) * 0.06;
    }
    printf("Tax due is: $%.2f",tax);

    return 0;
}