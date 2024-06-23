#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>

int main()
{
    char input1;
    char input2;
    char space;
    int same[5];
    int rank[13];
    int suit[4] = {0};
    int i = 0;
    bool bad = false;
    bool same1 = false;
    bool stright = false;
    bool flush = false;
    bool four = false;
    bool three = false;
    int two = 0;
    int temp = 0;
    for(int i=0;i<5;i++)    
    {    
        input1 = getchar();
        switch(toupper(input1))
        {
            case 'A': same[i] += 1; rank[0]++; break;
            case '2': same[i] += 2; rank[1]++; break;
            case '3': same[i] += 3; rank[2]++; break;
            case '4': same[i] += 4; rank[3]++; break;
            case '5': same[i] += 5; rank[4]++; break;
            case '6': same[i] += 6; rank[5]++; break;
            case '7': same[i] += 7; rank[6]++; break;
            case '8': same[i] += 8; rank[7]++; break;
            case '9': same[i] += 9; rank[8]++; break;
            case 'T': same[i] += 10; rank[9]++; break;
            case 'J': same[i] += 11; rank[10]++; break;
            case 'Q': same[i] += 12; rank[11]++; break;
            case 'K': same[i] += 13; rank[12]++; break;
            default : bad = true; break;
        }
        input2 = getchar();
        switch(toupper(input2))
        {
            case 'C': same[i] += 0; suit[0]++; break;
            case 'D': same[i] += 13; suit[1]++; break;
            case 'H': same[i] += 26; suit[2]++; break;
            case 'S': same[i] += 39; suit[3]++; break;
            default : bad = true; break;

        }
        if(i == 4)
        {
            break;
        }
        else
        {
            space = getchar();
        }
    }
    for(int i=0;i<4;i++)
    {
        if(suit[i] == 5)
        {
            flush = true;
        }
    }
    for(int i=0;i<13;i++)
    {
        if(rank[i] == 1)
        {
            for(int j=i;j<j+5;j++)
            {
                if(j>12)
                {
                    j = j - 12;
                    if(rank[j] == 1)
                    {
                        temp++;
                        break;
                    }
                }
                if(rank[j]!=1)
                {
                    break;
                }
                else
                {
                    temp++;
                }
            }
            break;
        }
    }
    if(temp == 4)
    {
        stright = true;
    }
    for(int i=0;i<13;i++)
    {
        if(rank[i] == 2)
        {
            two += 1;
        }
        else if (rank[i] == 3)
        {
            three = true;
        }
        else if(rank[i] == 4)
        {
            four = true;
        }
    }
    for(int i = 0;i<5;i++)
    {
        for(int j = i+1;j<5;j++)
        {
            if(same[i] == same[j])
            {
                same1 = true;
                break;
            }
        }
    }

    if(bad)
    {
        printf("Type11");
    }
    else if (same1)
    {
        printf("Type10");
    }
    
    else if(stright && flush)
    {
        printf("Type1");
    }
    else if (stright)
    {
        printf("Type5");
    }
    else if (flush)
    {
        printf("Type4");
    }
    else if(four)
    {
        printf("Type2");
    }
    else if(three && two == 1)
    {
        printf("Type3");
    }
    else if(three)
    {
        printf("Type6");
    }
    else if(two == 2)
    {
        printf("Type7");
    }
    else if(two == 1)
    {
        printf("Type8");
    }
    else
    {
        printf("Type9");
    }
    return 0;
}
