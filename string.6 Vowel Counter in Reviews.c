#include <stdio.h>
#include <ctype.h>

int main() {
    char review[200];
    int i, count = 0;

    printf("Enter review: ");
    scanf("%s", review); 

    for(i = 0; review[i] != '\0'; i++) {
        char ch = tolower(review[i]);  
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }

    printf("Number of vowels: %d\n", count);

    return 0;
}