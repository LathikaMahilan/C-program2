#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int arr[R][C];

    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int count = 0;

    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {

            int isRowMin = 1;
            int isColMax = 1;

            
            for(int k = 0; k < C; k++) {
                if(arr[i][k] < arr[i][j]) {
                    isRowMin = 0;
                    break;
                }
            }

        
            for(int k = 0; k < R; k++) {
                if(arr[k][j] > arr[i][j]) {
                    isColMax = 0;
                    break;
                }
            }

            if(isRowMin && isColMax)
                count++;
        }
    }

    printf("%d", count);

    return 0;
}