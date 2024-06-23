#include <stdio.h>

int fibonacciEven(int n) {
    if (n <= 2) {
        return 2;
    } else {
        return 4 * fibonacciEven(n - 1) + fibonacciEven(n - 2);
    }
}

int fibonacciOdd(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return 4 * fibonacciOdd(n - 1) + fibonacciOdd(n - 2);
    }
}

int main() {
    int n;

    scanf("%d", &n);

  
    for (int i = 1; i <= n; i++) {
        printf("%d ", fibonacciEven(i));
    }
printf("\n");
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", fibonacciOdd(i));
    }

    printf("\n");

    return 0;
}