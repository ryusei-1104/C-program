#include<stdio.h>

char y;
int temp = 0;
int x;
void t(int);
int main()
{
    scanf("%d %c",&x,&y);
    t(x);
    //printf("%d",temp);
    return 0;
}
void t(int x)
{
    while(x > 0)
    {
        for(int j = x-1;j>=0;j--)
        {
            printf(" ");
        }
        temp = temp + 1;
        for(int j = 0;j<temp * 2 - 1;j++)
        {
            printf("%c",y);
        }
        x = x - 1; 
        printf("\n");   
    }
    

}