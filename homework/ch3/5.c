#include<stdio.h>

int main()
{
    int y;
    int m;
    int d;
    printf("Enter a date (mm/dd/yyyy):");
    scanf("%d/%d/%d",&m,&d,&y);
    printf("You entered the date %.4d%.2d%.2d",y,m,d);
    return 0;
}