#include <stdio.h>
#include <stdlib.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int arr[R][C];
    int sum[R];

    for(int i = 0; i < R; i++) {
        sum[i] = 0;
        for(int j = 0; j < C; j++) {
            scanf("%d", &arr[i][j]);
            sum[i] += arr[i][j];
        }
    }

    int maxDiff = 0;

    for(int i = 0; i < R; i++) {
        for(int j = i + 1; j < R; j++) {
            int diff = abs(sum[i] - sum[j]);
            if(diff > maxDiff)
                maxDiff = diff;
        }
    }

    printf("%d", maxDiff);

    return 0;
}