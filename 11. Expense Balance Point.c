#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int total = 0;

    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        total += arr[i];
    }

    int left_sum = 0;

    for(int i = 0; i < n; i++) {
        int right_sum = total - left_sum - arr[i];

        if(left_sum == right_sum) {
            printf("%d", i);
            return 0;
        }

        left_sum += arr[i];
    }

    printf("-1");

    return 0;
}