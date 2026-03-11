#include <stdio.h>
int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int a[R][C];
    int freq[10001] = {0}; 
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &a[i][j]);
            freq[a[i][j]]++;
        }
    }
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (freq[a[i][j]] == 1) {
                printf("%d", a[i][j]);
                return 0;
            }
        }
    }
    return 0;
}