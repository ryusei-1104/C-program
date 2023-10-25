#include<stdio.h>

int main()
{
    int a;
    int ans;
    printf("Enter a two-digit number:");
    scanf("%2d",&a);
    ans = a / 10 + ((a % 10) * 10);
    printf("The reversal is %.2d",ans);
    return 0;
}