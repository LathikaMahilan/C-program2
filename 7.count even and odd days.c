#include <stdio.h>

int main() {
    int N;
    int day;
    int evenCount = 0, oddCount = 0;

    
    scanf("%d", &N);

    
    for(int i = 0; i < N; i++) {
        scanf("%d", &day);

        if(day % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    
    printf("Even:%d Odd:%d\n", evenCount, oddCount);

    return 0;
}