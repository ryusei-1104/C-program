#include<stdio.h>

int main()
{
    char m[100];
    int k = 0;
    int j = 0;
    printf("Enter message: \n");
    for(int i = 0;i < 100;i++)
    {
        scanf("%1c",&m[i]);
        if(m[i] == '\n')
        {
            break;
        }
        k = k + 1;
    }
    printf("In B1FF-speak: ");
    while (j < k)
    {
        if(m[j] >= 'a' && m[j] <= 'z')
        {
            m[j] = m[j] - 32;
        }
        switch (m[j])
        {
        case 'A':
            m[j] = '4';
            break;
        case 'B':
            m[j] = '8';
            break;
        case 'E':
            m[j] = '3';
            break;
        case 'I':
            m[j] = '1';
            break;
        case 'O':
            m[j] = '0';
            break;
        case 'S':
            m[j] = '5';
            break;
        default:
            break;
    }
    printf("%c",m[j]);
    j = j + 1;
    }
    printf("!!!!!!!!!!");
    
    return 0;
}