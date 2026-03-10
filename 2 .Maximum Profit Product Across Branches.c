#include <stdio.h>
#include <limits.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int arr[R][C];
    int maxRow[R], minRow[R];

    for(int i = 0; i < R; i++) {
        maxRow[i] = INT_MIN;
        minRow[i] = INT_MAX;

        for(int j = 0; j < C; j++) {
            scanf("%d", &arr[i][j]);

            if(arr[i][j] > maxRow[i])
                maxRow[i] = arr[i][j];

            if(arr[i][j] < minRow[i])
                minRow[i] = arr[i][j];
        }
    }

    int maxProduct = INT_MIN;

    for(int i = 0; i < R; i++) {
        for(int j = i + 1; j < R; j++) {

            int p1 = maxRow[i] * maxRow[j];
            int p2 = minRow[i] * minRow[j];

            if(p1 > maxProduct)
                maxProduct = p1;

            if(p2 > maxProduct)
                maxProduct = p2;
        }
    }

    printf("%d", maxProduct);

    return 0;
}