#include <stdio.h>


void moveDisk(int disk, char source, char destination) {
    printf("Move disk %d from pole %c to pole %c\n", disk, source, destination);
}
int towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        moveDisk(n, source, destination);
        return 1;
    }
    int moves = 0;
    moves += towerOfHanoi(n - 1, source, destination, auxiliary);
    moveDisk(n, source, destination);
    moves++;
    moves += towerOfHanoi(n - 1, auxiliary, source, destination);
    return moves;
}
int main() {
    int n;
   
    scanf("%d", &n);

    int totalMoves = towerOfHanoi(n, '1', '2', '3');
    printf("%d", totalMoves);

    return 0;
}