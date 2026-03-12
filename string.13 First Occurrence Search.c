#include <stdio.h>
int main() {
    char log[200], target;
    int i, index = -1;
    printf("Enter log string: ");
    fgets(log, sizeof(log), stdin);  
    printf("Enter target character: ");
    scanf(" %c", &target);  
    for(i = 0; log[i] != '\0'; i++) {
        if(log[i] == target) {
            index = i;  
            break;      
        }
    }
    printf("First occurrence index: %d\n", index);
    return 0;
}