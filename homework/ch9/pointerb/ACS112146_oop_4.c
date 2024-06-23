#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int sum = 0;
    int avg = 0;
    int temp = 0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum += a[i];
    }
    int max = a[0];
    avg = sum / n;
    for(int i=0;i<n;i++)
    {
        if(a[i] > avg)
        {
            temp++;
        }
        if(a[i] >= max)
        {
            max = a[i];
        }
    }
    printf("%d\n%d\n%d",sum,max,temp);
    return 0;
}