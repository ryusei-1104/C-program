#include<stdio.h>

int main()
{
    char s;
    int c = 0;
    printf("Enter a sentence: ");
    do
    {
        s = getchar();
        switch (s)
        {
        case 'a': case 'e': case 'i': case 'o': case 'u': case 'A': case 'E': case 'I': case 'O': case 'U':
            c = c + 1;
            break;
        
        default:
            break;
        }
    } while (s != '\n');
    printf("Your sentence contains %d vowels.",c);
    return 0;
}