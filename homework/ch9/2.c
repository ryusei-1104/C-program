#include<stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int d;
    float ans;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    ans = (float)(a + b + c +d)/4;
    printf("%.2f",ans);
    return 0;
}