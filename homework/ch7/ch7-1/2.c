#include<stdio.h>

int main()
{
    char n;
    int c = 0;
    printf("Enter a word: ");
    do
    {
        n = getchar();
        switch (n)
        {
        case 'a': case'e': case'i': case 'l': case 'n': case 'o': case 'r': case 's': case 't': case 'u': case 'A': case'E': case'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U': 
            c = c + 1;
            break;
        case 'd': case'g': case 'D': case'G':
            c = c + 2;
            break;
        case 'b': case'c': case'm': case 'p': case 'B': case'C': case'M': case 'P': 
            c = c + 3;
            break;
        case 'f': case'h': case'v': case 'w': case 'y': case 'F': case'H': case'V': case 'W': case 'Y': 
            c = c + 4;
            break;
        case 'k': case 'K':
            c = c + 5;
            break;
        case 'j': case'x': case 'J': case'X':
            c = c + 8;
            break;
        case 'q': case'z': case 'Q': case'Z':
            c = c + 10;
            break;
        case '\n':
            break;
        default:
            //printf("%c",n);
            break;
        }
    }while (n != '\n');

    printf("Scrabble value: %d",c);
    return 0;
}