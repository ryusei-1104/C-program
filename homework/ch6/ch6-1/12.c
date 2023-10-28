#include<stdio.h>

int main()
{   
    int d;
    int temp;
    scanf("%d",&d);
    scanf("%d",&temp);
    for(int i = temp;i>1;i--)
    {
         printf("   ");
    }
    for(int i = 1;i<=d;i++)
    {
        printf(" %2d",i);
        if(temp == 7)
        {
            printf("\n");
            temp = 0;
        }
        temp = temp + 1;
    }
    return 0;
}