#include<stdio.h>

int main()
{
    int a;
    int b;
    int c;
    float ans;
    scanf("%d %d %d",&a,&b,&c);
    ans = (a + b + c)/3;
    printf("%.2f",ans);
    return 0;
}