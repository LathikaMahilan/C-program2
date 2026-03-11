#include <stdio.h>
int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int a[R][C];
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            scanf("%d", &a[i][j]);
    int maxLength = 0;
    int rowIndex = 0;
    for (int i = 0; i < R; i++) {
        int length = 1;  // at least one element in sequence

        for (int j = 1; j < C; j++) {
            if ((a[i][j] % 2) != (a[i][j-1] % 2)) {
                length++; // alternating
            } else {
                length = 1; // reset if pattern breaks
            }

            if (length > maxLength) {
                maxLength = length;
                rowIndex = i;
            }
        }
    }
    printf("%d", rowIndex);
    return 0;
}