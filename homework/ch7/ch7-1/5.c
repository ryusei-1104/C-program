#include<stdio.h>

int main()
{
    char name;
    char l = ' ';
    char fn[100];
    int i = 0;
    int n = 0;
    printf("Enter a first and last name: \n");
    do
    {
        name = getchar();
        if(name >= 'A' && name <= 'Z')
        {
            l = name;
        }
    } while (name != ' ' || l == ' ');
    do
    {
        name = getchar();
        if(name != '\n' && name != ' ')
        {
            fn[i] = name;
            i = i + 1;
        }
    } while (name != '\n');
    while (n <i)
    {
        printf("%c",fn[n]);
        n = n + 1;
    }
    
    printf(", %c.",l);
    return 0;
}