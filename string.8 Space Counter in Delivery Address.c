#include <stdio.h>
int main() {
    char address[200];
    int i, count = 0;
    printf("Enter delivery address: ");
    fgets(address, sizeof(address), stdin);  

    for(i = 0; address[i] != '\0'; i++) {
        if(address[i] == ' ') {
            count++;
        }
    }
    printf("Space count: %d\n", count);
    return 0;
}