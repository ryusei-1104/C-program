#include<stdio.h>

int main()
{
    int n = 1;
    int ans = 0;
    while (n != 0)
    {
        scanf("%d",&n);
        ans = ans + n;
    }
    printf("%d",ans);
    

    return 0;
}