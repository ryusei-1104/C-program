#include<stdio.h>

int main()
{
    int a;
    int ans = 0;
    printf("Enter a nonnegative integer: ");
    scanf("%d",&a);
    while(a > 0)
    {
        ans = ans + a % 10;
        a = a /10;
    }
    printf("%d",ans);

    return 0;
}