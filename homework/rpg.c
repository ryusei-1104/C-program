#include<stdio.h>

int main()
{
    int n;
    int count = 0;
    scanf("%d",&n);
    while(n > 0)
    {
        count++;
        n = n / 10;
    }   
    printf("%d",count);
    return 0;
}