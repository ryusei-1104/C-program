#include<stdio.h>

int main()
{
    int n;
    int ans = 0;
    do
    {
        scanf("%d",&n);
        if(n > 0)
        {
            ans = ans + n;
        }
        else
        {
            ans = ans;
        }
    } while (n != 0);
    printf("%d",ans);
    return 0;
}