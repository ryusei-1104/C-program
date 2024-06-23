#include<stdio.h>

int main()
{
    char a[100];
    char b[100];
    int n = 0;
    int m = 0;
    int temp = 0;
    printf("Enter first word: ");
    a[n] = getchar();
    while(a[n] != '\n')
    {
        n++;
        a[n] = getchar();
    }
    printf("\nEnter second word: ");
    b[m] = getchar();
    while(b[m] != '\n')
    {
        m++;
        b[m] = getchar();
    }
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            if(a[i] == b[j])
            {
                temp++;
                b[j] = '\0';
            }
        }
    }
    if(temp == n)
    {
        printf("\nThe words are anagrams.");
    }
    else
    {
        printf("\nThe words are not anagrams.");
    }
    return 0;
}