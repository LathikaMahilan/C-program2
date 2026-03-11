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
    int maxCount = 0;
    int maxValue = a[0][0];
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            int count = 0;
            for(int k = 0; k < R; k++) {
                for(int l = 0; l < C; l++) {
                    if(a[i][j] == a[k][l]) {
                        count++;
                    }
                }
            }
            if(count > maxCount) {
                maxCount = count;
                maxValue = a[i][j];
            }
        }
    }
    printf("%d", maxValue);
    return 0;
}