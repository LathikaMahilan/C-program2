#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int price[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &price[i]);
    }

    int min = price[0];
    int maxProfit = price[1] - price[0];

    for(int i = 1; i < n; i++) {
        int profit = price[i] - min;

        if(profit > maxProfit) {
            maxProfit = profit;
        }

        if(price[i] < min) {
            min = price[i];
        }
    }

    printf("%d", maxProfit);

    return 0;
}