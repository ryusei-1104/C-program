#include <stdio.h>
int main()
{
    int a,b1,b2,b3,b4,b5,c1,c2,c3,c4,c5,d,e,f;
    scanf("%d",&a);
    scanf("%1d%1d%1d%1d%1d",&b1,&b2,&b3,&b4,&b5);
    scanf("%1d%1d%1d%1d%1d",&c1,&c2,&c3,&c4,&c5);
    d=a+b3+c1+c4;
    e=b1+b4+c2+c5;
    f=b2+b5+c3;
    printf("%d",9-((d*3+e+f-1)%10));
    return 0;
}