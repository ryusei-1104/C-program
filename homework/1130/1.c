#include <stdio.h>

int calculateMark(int n, int sunlightEnergy) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }

    int markValues[n + 1];
    markValues[0] = 0;
    markValues[1] = 1;

    for (int i = 2; i <= n; i++) {
        markValues[i] = sunlightEnergy * markValues[i - 1] + markValues[i - 2];
    }

    return markValues[n];
}

int main() {
    int n, sunlightEnergy;
  
    scanf("%d", &n);
 
    scanf("%d", &sunlightEnergy);

    int result = calculateMark(n, sunlightEnergy);
    printf("%d",result);

    return 0;
}