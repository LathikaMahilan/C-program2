#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int matrix[R][C];

    // Input matrix
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int maxSum = 0;

    // Slide 2x2 window
    for(int i = 0; i < R - 1; i++) {
        for(int j = 0; j < C - 1; j++) {
            int sum = matrix[i][j] + matrix[i][j+1] +
                      matrix[i+1][j] + matrix[i+1][j+1];

            if(sum > maxSum) {
                maxSum = sum;
            }
        }
    }

    printf("%d", maxSum);

    return 0;
}