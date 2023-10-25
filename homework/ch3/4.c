#include<stdio.h>

int main()
{
    int i1;
    int i2;
    int j1;
    int j2;
    int ans1;
    int ans2;
    printf("Enter first fraction:");
    scanf("%d/%d",& i1,&i2);
    printf("Enter second fraction:");
    scanf("%d/%d",& j1,&j2);
    ans1 = i1 *j2 + j1 * i2;
    ans2 = i2 *j2;
    printf("The sum is %d/%d",ans1 ,ans2);
    return 0;
}