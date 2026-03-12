#include <stdio.h>
int main() {
    char text[200];
    int i;
    printf("Enter text: ");
    fgets(text, sizeof(text), stdin); 
    for(i = 0; text[i] != '\0'; i++) {
       
        if(text[i] >= 'a' && text[i] <= 'z') {
            text[i] = text[i] - ('a' - 'A'); 
        }
    }
    printf("Uppercase string: %s", text);
    return 0;
}