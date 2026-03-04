#include <stdio.h>

int main() {
    int N;

    // Read size
    scanf("%d", &N);

    int arr[N];

    // Read array elements
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int maxFromRight = arr[N - 1];

    // Last element is always a leader
    printf("%d ", maxFromRight);

    // Traverse from right to left
    for(int i = N - 2; i >= 0; i--) {
        if(arr[i] > maxFromRight) {
            maxFromRight = arr[i];
            printf("%d ", maxFromRight);
        }
    }

    return 0;
}