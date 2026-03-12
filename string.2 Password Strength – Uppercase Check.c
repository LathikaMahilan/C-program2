#include <stdio.h>

int main() {
    char password[100];
    int i = 0, hasUpper = 0;
    scanf("%s, password");
    while(password[i] != '\0') {
        if(password[i] >= 'A' && password[i] <= 'Z') {
            hasUpper = 1;
            break;

        }
        i++;
    }
    if (hasUpper)
        printf("valid");
    else
        printf("Invalid");    
    return 0;
}