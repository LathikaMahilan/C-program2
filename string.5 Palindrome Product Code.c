#include <stdio.h>
#include <string.h>

int main() {
    char code[100], reverse[100];
    int i, len;

    printf("Enter product code: ");
    scanf("%s", code);

    len = strlen(code);

    
    for(i = 0; i < len; i++) {
        reverse[i] = code[len - i - 1];
    }
    reverse[len] = '\0';

    
    if(strcmp(code, reverse) == 0) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}