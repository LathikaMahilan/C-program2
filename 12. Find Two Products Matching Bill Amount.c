#include <stdio.h>

int main() {
    int n, target;
    scanf("%d", &n);
    int prices[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }
    scanf("%d", &target);
    int found = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(prices[i] + prices[j] == target) {
                printf("%d %d", prices[i], prices[j]);
                found = 1;
                break;
            }
        }
        if(found) break;
    }

    if(!found) {
        printf("No pair");
    }

    return 0;
}