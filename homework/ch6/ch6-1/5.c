#include<stdio.h>

int main()
{
    int n;
    int j = 0;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++)
    {
        j = i;
        while(j > 0)
        {
            printf("*");
            j = j - 1;
        }
        if(i < n)
        {
            printf("\n");
        }
        
    }
    return 0;
}