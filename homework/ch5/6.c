#include<stdio.h>

int main()
{
    int m;
    int h;
    int m2;
    scanf("%d",&m);
    h = m / 60;
    if(((h / 12) % 2) == 1)
    {
        printf("PM:");
        for(int i = 0;i < h;++i)
        {
            if(h > 12)
            {
                h = h - 12;
            }
            else
            {
                break;
            }
        }
        
        switch (h)
        {
        case 1:
            printf("one");
            break;
        case 2:
            printf("two");
            break;
        case 3:
            printf("three");
            break;
        case 4:
            printf("four");
            break;
        case 5:
            printf("five");
            break;
        case 6:
            printf("six");
            break;
        case 7:
            printf("seven");
            break;
        case 8:
            printf("eight");
            break;
        case 9:
            printf("nine");
            break;
        case 10:
            printf("ten");
            break;
        case 11:
            printf("eleven");
            break;
        case 12:
            printf("twelve");
            break;
        default:
            break;
        }
    }
    else
    {   
        printf("AM:");
        for(int i = 0;i < h;++i)
        {
            if(h >= 12)
            {
                h = h - 12;
            }
            else
            {
                break;
            }
        }
        switch (h)
        {
        case 1:
            printf("one");
            break;
        case 2:
            printf("two");
            break;
        case 3:
            printf("three");
            break;
        case 4:
            printf("four");
            break;
        case 5:
            printf("five");
            break;
        case 6:
            printf("six");
            break;
        case 7:
            printf("seven");
            break;
        case 8:
            printf("eight");
            break;
        case 9:
            printf("nine");
            break;
        case 10:
            printf("ten");
            break;
        case 11:
            printf("eleven");
            break;
        case 0:
            printf("twelve");
            break;
        default:
            break;
        }
    }
    m2 = m % 60;
    printf(":%d",m2);
    return 0;
}