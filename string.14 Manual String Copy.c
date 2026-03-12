#include <stdio.h>
int main() {
    char source[200], destination[200];
    int i;
    printf("Enter source string: ");
    fgets(source, sizeof(source), stdin);  
    for(i = 0; source[i] != '\0'; i++) {
        destination[i] = source[i];
    }
    destination[i] = '\0';  
    printf("Copied string: %s", destination);
    return 0;
}