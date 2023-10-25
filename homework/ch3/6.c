#include<stdio.h>

int main()
{
    int i1;
    int i2;
    int j1;
    int j2;
    int ans1;
    int ans2;
    printf("Enter two fractions separated by a plus sign:");
    scanf("%d/%d+%d/%d",&i1,&i2,&j1,& j2);
    ans1 = i1 *j2 + j1 * i2;
    ans2 = i2 *j2;
    printf("The sum is %d/%d",ans1 ,ans2);
    return 0;
}