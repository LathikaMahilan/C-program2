#include <stdio.h>
#include <ctype.h>
int main() {
    char transcript[500];
    int i, count = 0;

    printf("Enter transcript: ");
    scanf("%s", transcript);  

    for(i = 0; transcript[i] != '\0'; i++) {
        char ch = tolower(transcript[i]);
        if((ch >= 'a' && ch <= 'z') && !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
            count++;
        }
    }
    printf("Consonant count: %d\n", count);
    return 0;
}