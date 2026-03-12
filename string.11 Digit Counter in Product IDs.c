#include <stdio.h>
int main() {
    char productID[200];
    int i, count = 0;
    printf("Enter product ID: ");
    fgets(productID, sizeof(productID), stdin);

    for(i = 0; productID[i] != '\0'; i++) {
        if(productID[i] >= '0' && productID[i] <= '9') {
            count++;
        }
    }
    printf("Number of digits: %d\n", count);
    return 0;
}