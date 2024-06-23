#include<stdio.h>

int main()
{
    char a[100];
    int n;
    int i = 0;
    printf("Enter message to be encrypted: ");
    a[i] = getchar();
    while(a[i] != '\n')
    {
        i++;
        a[i] = getchar();
    }
    printf("\nEnter shift amount (1-25): ");
    scanf("%d",&n);
    printf("\nEncrypted message: ");
    for(int j = 0;j<i;j++)
    {
        if(a[j]<='z' && a[j] >='a')
        {
            if(a[j] + n > 'z')
            {
                a[j] = a[j] - 26 + n;
            }
            else
            {
                a[j] = a[j] + n;
            }
            printf("%c",a[j]);
        }
        else if(a[j]<='Z' && a[j] >='A')
        {
            if(a[j] + n > 'Z')
            {
                a[j] = a[j] - 26 + n;
            }
            else
            {
                a[j] = a[j] + n;
            }
            printf("%c",a[j]);
        }
        else
        {
            printf("%c",a[j]);
        }
    }
    return 0;
}