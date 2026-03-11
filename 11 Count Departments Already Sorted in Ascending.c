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
    int count = 0;
    for(int i = 0; i < R; i++) {
        int sorted = 1;
        for(int j = 0; j < C - 1; j++) {
            if(a[i][j] > a[i][j + 1]) {
                sorted = 0;
                break;
            }
        }
        if(sorted == 1)
            count++;
    }
    printf("%d", count);
    return 0;
}