#include<stdio.h>

int main()
{
    int a;
    int b1;
    int b2;
    int b3;
    int b4;
    int b5;
    int c1;
    int c2;
    int c3;
    int c4;
    int c5;
    int temp1;
    int temp2;
    int ans;
    printf("Enter the first (single) digit:");
    scanf("%1d",&a);
    printf("Enter first group of five digits:");
    scanf("%1d%1d%1d%1d%1d",&b1,&b2,&b3,&b4,&b5);
    printf("Enter second group of five digits:");
    scanf("%1d%1d%1d%1d%1d",&c1,&c2,&c3,&c4,&c5);
    temp1 = a + b2 + b4 + c1 + c3 + c5;
    temp2 = b1 + b3 + b5 + c2 + c4;
    ans = 9 - ((temp1 * 3 + temp2 - 1) % 10);
    printf("Check digit: %d",ans);
    return 0;
}