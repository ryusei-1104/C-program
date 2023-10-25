#include<stdio.h>

int main()
{
    int i1;
    int i2;
    int j1;
    int j2;
    int k1;
    int k2;
    int ans1;
    int ans2;
    int temp1;
    int temp2;
    scanf("%d/%d",& i1,&i2);
    scanf("%d/%d",& j1,&j2);
    scanf("%d/%d",& k1,&k2);
    temp1 = i1 *j2 + i2 *j1;
    temp2 = i2 *j2;
    ans1 = temp1 *k2 + temp2 *k1;
    ans2 = i2 *j2 *k2;
    printf("%d/%d",ans1 ,ans2);
    return 0;
}