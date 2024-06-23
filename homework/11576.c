#include<stdio.h>

int main()
{
    int n;
    int len[n];
    char c1;
    char c2;
    int a;
    int b;
    int i = 0;
    int j = 0;
    int count = 1;
    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        count = 1;
        scanf("%d %d",&a,&b);
        scanf("%1c",&c1);
        while (b > 0)
        {
            while(scanf("%1c",&c2))
            {
                if(c2 == '\n')
                {
                    break;
                }
                else if(c1 != c2)
                {
                    count = count + 1;
                    printf("%d\n",count);
                    c1 = c2;
                }
            }
            b = b - 1;
            printf("b %d\n",b);
        }
        len[i] = count;
    }
    for(j = 0;j < n;j++)
    {
        printf("%d ",len[j]);
    }
    return 0;
}