#include<stdio.h>

int main()
{
    char a[100];
    int n = 0;
    int temp = 0;
    a[n] = getchar();
    while(a[n] != '!' && a[n] != '?' && a[n] != '.')
    {
        n++;
        a[n] = getchar();
    }
    for(int i = n-1;i>=0;i--)
    {
        if(a[i] == ' ')
        {
            for(int j = i+1;j<=i+temp;j++)
            {
                printf("%1c",a[j]);
            }
            printf(" ");
            temp = 0;
        }
        else
        {
            temp++;
        }
    }
    for(int i = 0;i<temp;i++)
    {
        printf("%c",a[i]);
    }
    printf("%c",a[n]);
    return 0;
}