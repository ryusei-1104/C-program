#include<stdio.h>

int main()
{
    int a[5][5];
    int r[5] = {0,0,0,0,0};
    int c[5] = {0,0,0,0,0};
    for(int i = 0;i<5;i++)
    {
        printf("Enter row %d: ",i+1);
        for(int j = 0;j<5;j++)
        {
            scanf("%d",&a[j][i]);
            r[i] = r[i] + a[j][i];
            //printf("%d ",r[i]);
        }
        //printf("\n");
    }
    printf("Row totals: ");
    for(int i = 0;i < 5;i++)
    {
        printf("%d ",r[i]);
    }
    printf("\n");
    for(int i = 0;i<5;i++)
    {
        for(int j = 0;j<5;j++)
        {
            c[i] = c[i] + a[i][j];
            //printf("%d ",r[i]);
        }
        //printf("\n");
    }
    printf("Column totals: ");
    for(int i = 0;i < 5;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}