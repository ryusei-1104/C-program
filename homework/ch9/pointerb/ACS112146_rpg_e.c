#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int b[n];
    int temp = 0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i] = a[i];
    }
    for(int i = 0;i<n;i++)
    {
        temp = 0; 
        for(int j = i+1;j<n;j++)
        {
            if(b[j] == a[i])
            {
                b[j] = '\0';
                temp = 1;
                
            }
        }
        if(temp == 1)
        {
            printf("%d ",a[i]);
        }
    }
    return 0;
}