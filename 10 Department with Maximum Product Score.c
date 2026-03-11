#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int data[R][C];
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            scanf("%d", &data[i][j]);
        }
    }
    int maxRow = 0;
    int maxProduct = 1;
    for(int j = 0; j < C; j++) {
        maxProduct *= data[0][j];
    }
    for(int i = 1; i < R; i++) {
        int product = 1;
        for(int j = 0; j < C; j++) {
            product *= data[i][j];
        }

        if(product > maxProduct) {
            maxProduct = product;
            maxRow = i;
        }
    }
    printf("%d", maxRow);
    return 0;
}