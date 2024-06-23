#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


void generatePermutations(int arr[], int n, int index, int *count) {
    if (index == n) {
        for (int i = 0; i < n; i++) {
            
        }
        printf("\n");
        (*count)++;
        return;
    }
    for (int i = index; i < n; i++) {
        swap(&arr[index], &arr[i]);
        generatePermutations(arr, n, index + 1, count);
        swap(&arr[index], &arr[i]); 
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int count = 0;
  generatePermutations(arr, n, 0, &count);
    printf("%d", count);

    return 0;
}