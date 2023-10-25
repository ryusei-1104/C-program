#include<stdio.h>

int main()
{
    int a;
    int b1;
    int b2;
    int b3;
    int b4;
    int c1;
    int c2;
    int c3;
    int c4;
    int d1;
    int d2;
    int d3;
    int d4;
    int temp1;
    int temp2;
    int temp3;
    int ans;
    scanf("%1d",&a);
    scanf("%1d%1d%1d%1d",&b1,&b2,&b3,&b4);
    scanf("%1d%1d%1d%1d",&c1,&c2,&c3,&c4);
    scanf("%1d%1d%1d%1d",&d1,&d2,&d3,&d4);
    temp1 = a + b2 + b4 + c2 + c4;
    temp2 = b1 + b3 + c1 + c3;
    temp3 = d1 + d2 + d3 + d4;
    ans = 9 - ((temp1 * 2 + temp2 + temp3 + 5) % 7);
    printf("%d",ans);
    return 0;
}