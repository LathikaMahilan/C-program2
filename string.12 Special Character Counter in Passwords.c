#include <stdio.h>
int main() {
    char password[200];
    int i, count = 0;
    printf("Enter password: ");
    fgets(password, sizeof(password), stdin); 
    for(i = 0; password[i] != '\0'; i++) {
        char ch = password[i];
        if(!((ch >= 'a' && ch <= 'z') || 
             (ch >= 'A' && ch <= 'Z') || 
             (ch >= '0' && ch <= '9') || 
             ch == '\n')) {  
            count++;
        }
    }
    printf("Number of special characters: %d\n", count);
    return 0;
}