#include<stdio.h>

int main()
{
    int a;
    int ans;
    printf("Enter a three-digit number:");
    scanf("%3d",&a);
    ans = a / 100 + ((a % 10) * 100) + (a % 100) / 10 * 10;
    printf("The reversal is %.3d",ans);
    return 0;
}