#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int a[R][C];
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int count = 0;
    for (int i = 0; i < R; i++) {
        int unique = 1;  // assume row is unique
        for (int j = 0; j < C - 1; j++) {
            for (int k = j + 1; k < C; k++) {
                if (a[i][j] == a[i][k]) {
                    unique = 0;  // duplicate found
                    break;
                }
            }
            if (!unique) break;
        }
        if (unique) count++;
    }
    printf("%d", count);
    return 0;
}