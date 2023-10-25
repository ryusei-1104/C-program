#include<stdio.h>

int main()
{
    int i1;
    int i2;
    int j1;
    int j2;
    int ans1;
    int ans2;
    scanf("%d/%d",& i1,&i2);
    scanf("%d/%d",& j1,&j2);
    ans1 = i1 *j2 - i2 *j1;
    ans2 = i2 *j2;
    printf("%d/%d",ans1 ,ans2);
    return 0;
}