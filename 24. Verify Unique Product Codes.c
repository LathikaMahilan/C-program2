#include <stdio.h>

int main() {
    int n, i, j, flag = 0;
    scanf("%d", &n);

    int arr[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
            break;
    }

    if(flag == 1)
        printf("No");
    else
        printf("Yes");

    return 0;
}