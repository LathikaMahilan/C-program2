#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int maxFromRight = arr[N - 1];
    arr[N - 1] = -1;
    for(int i = N - 2; i >= 0; i--) {
        int current = arr[i];
        arr[i] = maxFromRight;

        if(current > maxFromRight) {
            maxFromRight = current;
        }
    }
    for(int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}