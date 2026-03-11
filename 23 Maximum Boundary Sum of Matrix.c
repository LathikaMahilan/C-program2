#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int a[R][C];
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            scanf("%d", &a[i][j]);
    int sum = 0;
    for (int j = 0; j < C; j++)
        sum += a[0][j];
    if (R > 1) {
        for (int j = 0; j < C; j++)
            sum += a[R - 1][j];
    }
    for (int i = 1; i < R - 1; i++) {
        sum += a[i][0];      
        if (C > 1)
            sum += a[i][C-1]; 
    }
    printf("%d", sum);
    return 0;
}