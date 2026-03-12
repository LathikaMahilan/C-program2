#include <stdio.h>

int main() {
    char text[200];
    int i;
    printf("Enter text: ");
    fgets(text, sizeof(text), stdin); 
    for(i = 0; text[i] != '\0'; i++) {
        if(text[i] >= 'A' && text[i] <= 'Z') {
            text[i] = text[i] + 32;  
        }
    }
    printf("Lowercase string: %s", text);
    return 0;
}