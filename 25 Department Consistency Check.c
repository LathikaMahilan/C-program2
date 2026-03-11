#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int a[R][C];
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            scanf("%d", &a[i][j]);

    int count = 0;

    for (int i = 0; i < R; i++) {
        int min = a[i][0];
        int max = a[i][0];

        for (int j = 1; j < C; j++) {
            if (a[i][j] < min) min = a[i][j];
            if (a[i][j] > max) max = a[i][j];
        }

        if ((max - min) <= 1000)
            count++;
    }

    printf("%d", count);

    return 0;
}