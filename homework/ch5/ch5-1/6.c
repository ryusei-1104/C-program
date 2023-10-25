#include<stdio.h>

int main()
{
    int m;
    int h;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d",&h,&m);
    if(h < 0 || h>=24 || m>=60)
    {
        printf("Not the correct time format");
    }
    else if(h >=12)
    {
        if(h > 12)
        {
            h = h - 12;
        }   
        printf("Equivalent 12-hour time: %d:%.2d ",h,m);
        printf("PM");

 
    }
    else
    {   
        if(h == 0)
        {
            h = 12;
        }
        printf("Equivalent 12-hour time: %d:%.2d ",h,m);
        printf("AM");
    }
    return 0;
}