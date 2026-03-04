#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int sales[N];

    for(int i = 0; i < N; i++) {
        scanf("%d", &sales[i]);
    }

    int isSorted = 1;  

    for(int i = 0; i < N - 1; i++) {
        if(sales[i] > sales[i + 1]) {
            isSorted = 0;
            break;
        }
    }

    if(isSorted)
        printf("Yes");
    else
        printf("No");

    return 0;
}