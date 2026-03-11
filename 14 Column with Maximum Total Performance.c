#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int a[R][C];
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int maxSum = -999999, maxCol = 0;
    for(int j = 0; j < C; j++) {
        int sum = 0;
        for(int i = 0; i < R; i++) {
            sum += a[i][j];
        }
        if(sum > maxSum) {
            maxSum = sum;
            maxCol = j;
        }
    }
    printf("%d", maxCol);
    return 0;
}