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

    int maxUnique = 0;
    int deptIndex = 0;

    for(int i = 0; i < R; i++) {
        int uniqueCount = 0;

        for(int j = 0; j < C; j++) {
            int isUnique = 1;

            for(int k = 0; k < j; k++) {
                if(arr[i][j] == arr[i][k]) {
                    isUnique = 0;
                    break;
                }
            }

            if(isUnique)
                uniqueCount++;
        }

        if(uniqueCount > maxUnique) {
            maxUnique = uniqueCount;
            deptIndex = i;
        }
    }

    printf("%d", deptIndex);

    return 0;
}