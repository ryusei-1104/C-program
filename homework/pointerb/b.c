#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);

    int array[n][m], turned[m][n], *p, *q;

    // ?入矩?元素
    for (p = &array[0][0]; p <= &array[n - 1][m - 1]; p++)
    {
        scanf("%d", p);
    }

    // ?置矩?
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            turned[i][j] = array[j][i];
        }
    }

    // ?出?置后的矩?
    for (int i = 0 ; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", turned[i][j]);
        }
    }

    return 0;
}


