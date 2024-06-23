#include<stdio.h>

int main()
{
    char a[100];
    int i = 0;
     scanf("%1c",&a[i]);
    while( a[i] != '?' && a[i] != '!' && a[i] != '.')
    {
        i++;
        scanf("%1c",&a[i]);
    }

    if(a[i] == '!')
    {
       printf("%d",i + 2); 
    }
    else
    {
        printf("%d",i + 1);
    }
    return 0;
}