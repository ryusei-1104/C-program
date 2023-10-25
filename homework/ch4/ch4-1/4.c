#include<stdio.h>

int main()
{
    int a;
    int ans1;
    int ans2;
    int ans3;
    printf("Enter a three-digit number:");
    scanf("%3d",&a);
    ans1 = a / 100;
    ans2 =(a % 100) / 10 ;
    ans3 =(a % 10);
    printf("The reversal is %1d %1d %1d",ans3,ans2,ans1);
    return 0;
}