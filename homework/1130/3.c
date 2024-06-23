#include <stdio.h>

int countWays(int n, int m) {
    if (n == 0) {
        return 1;
    }
    if (n < 0 || m == 0) {
        return 0;
    }

    return countWays(n, m - 1) + countWays(n - m, m);
}

int main() {
    int n;
    
    scanf("%d", &n);

    int ways = countWays(n, n);
    printf("%d",  ways);

    return 0;
}