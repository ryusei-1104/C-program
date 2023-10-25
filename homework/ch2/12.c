#include<stdio.h>

int main()
{
    float loan;
    float rate;
    float pay;
    float ans1;
    float ans2;
    float ans3;
    scanf("%f %f %f",&loan,&rate,&pay);
    rate = 1 + rate / 1200;
    ans1 = loan * rate - pay;
    loan = ans1;
    ans2 = loan * rate - pay;
    loan = ans2;
    ans3 = loan * rate - pay;
    loan = ans3;
    printf("$%.2f\n", ans1);
    printf("$%.2f\n", ans2);
    printf("$%.2f", ans3);
    return 0;
}