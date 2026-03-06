#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int price;
    int min = 0;
    int found = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d", &price);

        if(price > 0) {               
            if(found == 0 || price < min) {
                min = price;
                found = 1;
            }
        }
    }

    if(found)
        printf("%d", min);
    else
        printf("No valid price");

    return 0;
}