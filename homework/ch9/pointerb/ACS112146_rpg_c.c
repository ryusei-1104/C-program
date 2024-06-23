#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    int e[n];
    int o[n];
    int temp1 = 0;
    int temp2 = 0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2 == 0)
        {
            e[temp1] = a[i];
            temp1++;
        }
        else
        {
            o[temp2] = a[i];
            temp2++;
        }
    }
    for(int i = 0;i < temp2;i++)
    {
        printf("%d ",o[i]);
    }
    //printf("\n");
    for(int i = 0;i < temp1;i++)
    {
        printf("%d ",e[i]);
    }
    return 0;
}