#include<stdio.h>
#include<math.h>

int main()
{
    int x;
    int ans;
    scanf("%d",&x);
    if(x == 0)
    {
        ans = -6;
        printf("%d",ans);
    }
    else
    {
        ans = 3 * pow(x,5) + 2 * pow(x,4) - 5 * pow(x,3) - pow(x,2) + 7 * x - 6;  
        printf("%d",ans);
    }
    return 0;
}