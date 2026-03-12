#include <stdio.h>

int main() {
    char text[500];
    int i, count = 0;
    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);  
    for(i = 0; text[i] != '\0'; i++) {
        if(text[i] == ' ' && text[i+1] != ' ' && text[i+1] != '\n' && text[i+1] != '\0') {
            count++;
        }
    }
    if(text[0] != '\n' && text[0] != '\0') {
        count++;
    }
    printf("Number of words: %d\n", count);
    return 0;
}