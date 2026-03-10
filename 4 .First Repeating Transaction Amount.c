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

    int found = 0;

    for(int i = 0; i < R && !found; i++) {
        for(int j = 0; j < C && !found; j++) {

            for(int k = i; k < R; k++) {
                int start = (k == i) ? j + 1 : 0;

                for(int l = start; l < C; l++) {
                    if(arr[i][j] == arr[k][l]) {
                        printf("%d", arr[i][j]);
                        found = 1;
                        break;
                    }
                }
                if(found) break;
            }

        }
    }

    return 0;
}