#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int matrix[R][C];
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int balancedCount = 0;
    for(int i = 0; i < R; i++) {
        int even = 0, odd = 0;
        for(int j = 0; j < C; j++) {
            if(matrix[i][j] % 2 == 0)
                even++;
            else
                odd++;
        }

        if(even == odd)
            balancedCount++;
    }
    printf("%d", balancedCount);
    return 0;
}