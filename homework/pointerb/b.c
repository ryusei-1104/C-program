#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);

    int array[n][m], turned[m][n], *p, *q;

    // ?�J�x?����
    for (p = &array[0][0]; p <= &array[n - 1][m - 1]; p++)
    {
        scanf("%d", p);
    }

    // ?�m�x?
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            turned[i][j] = array[j][i];
        }
    }

    // ?�X?�m�Z���x?
    for (int i = 0 ; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", turned[i][j]);
        }
    }

    return 0;
}


