#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int b[n];
    
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i] = i+1;
        b[a[i]-1] = '\0';
        if(b[i] != '\0')
        {
            printf("%d ",b[i]);
            break;
        }
    }
    return 0;
}