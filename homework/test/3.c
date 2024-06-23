#include<stdio.h>

int main()
{
    int i;
    float ans = 1;
    float temp;
    //printf("input(0-7):\n");
    scanf("%d",&i);
    while(i > 0)
    {
        temp = 1;
        for(int j=i;j>0;j--)
        {
            temp = temp * j;
        }
        ans = ans + 1 / temp;
        i = i - 1;
    }
    printf("%.4f",ans);
    return 0;
}