#include<stdio.h>

int main()
{
    int h;
    int m;
    char t;
    printf("Enter a 12-hour time (hours:minutes AM/PM): ");
    scanf("%d:%d %c",&h,&m,&t);
    do
    {
        //t = getchar();
        switch (t)
        {
        case 'p': case 'P':
        if(h < 12)
        {
            h = h + 12;
        }
            break;
        
        default:
            break;
        }
    }while ((t = getchar())!='\n');
    printf("Equivalent 24-hour time: %.2d:%.2d",h,m);
    return 0;
}