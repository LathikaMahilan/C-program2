#include <stdio.h>

int main() {
    int N, X;
    
    
    scanf("%d", &N);
    
    int marks[N];
    
    
    for(int i = 0; i < N; i++) {
        scanf("%d", &marks[i]);
    }
    
    
    scanf("%d", &X);
    
    int count = 0;
    
    
    for(int i = 0; i < N; i++) {
        if(marks[i] == X) {
            count++;
        }
    }
    
    
    printf("%d", count);
    
    return 0;
}