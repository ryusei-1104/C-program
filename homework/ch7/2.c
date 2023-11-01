#include<stdio.h>

int main()
{
    char ch;
    int len = 0;
    printf("Enter a message:");
    while((ch = getchar())!= '\n')
    {
        len = len + 1;
    }
    printf("Your message was %d character(s) long.",len);
    return 0;
}