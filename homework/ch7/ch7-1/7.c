#include<stdio.h>
#include<string.h>

int main()
{
    float count = 1;
    char s[200];
    float number = 0;
    float ans = 0;
    printf("Enter a sentence: ");
    fgets(s,200,stdin);
    for(int i=0;i<200;i++)
    {
        if(s[i] == ' ')
        {
            count++;
        }
        else if(s[i] == '.')
        {
            number = number + 1;
            break;
        }
        else if(s[i] == '\n')
        {
            break;
        }
        else
        {
           number = number + 1; 
        }

    }
    ans = number / count;
    printf("Characters: %.f\nWords: %.f\nAverage word length: %.1f",number,count,ans);
    return 0;
}