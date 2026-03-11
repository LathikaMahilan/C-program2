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
    int maxDiff = 0;
    for (int i = 0; i < R; i++) {
        int rowMin = a[i][0];
        int rowMax = a[i][0];
        for (int j = 1; j < C; j++) {
            if (a[i][j] < rowMin) rowMin = a[i][j];
            if (a[i][j] > rowMax) rowMax = a[i][j];
        }
        for (int k = 0; k < R; k++) {
            if (i == k) continue;
            int otherMin = a[k][0];
            int otherMax = a[k][0];
            for (int j = 1; j < C; j++) {
                if (a[k][j] < otherMin) otherMin = a[k][j];
                if (a[k][j] > otherMax) otherMax = a[k][j];
            }
            int diff1 = rowMax - otherMin;
            int diff2 = otherMax - rowMin;
            if (diff1 > maxDiff) maxDiff = diff1;
            if (diff2 > maxDiff) maxDiff = diff2;
        }
    }
    printf("%d", maxDiff);
    return 0;
}