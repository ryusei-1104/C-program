#include<stdio.h>

int main()
{
    int n;
    int i = 0;
    int j = 0;
    int c = 1;
    int m = 0;
    scanf("%d",&n);
    int a[n][n];
    if(n % 2 == 0)
    {
        m = n/2;
    }
    else
    {
        m = n/2+1;
    }
    for(i = 0;i<m;i++)
    {
        for(j = i;j<n-i;j++)
        {
            a[i][j] = c++;
            //c++;
        }
        for(j=i+1;j<n-i;j++)
        {
            a[j][n-i-1] = c++;
            //c++;
        }
        for(j = n-i-2;j>=i;j--)
        {
            a[n-1-i][j] = c++;
            //c++;
        }
        for(j = n-2-i;j>=i+1;j--)
        {
            a[j][i] = c++;
            //c++;
        }
    }
    for(int i = 0;i<n;i++)
    {
        for(j = 0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}