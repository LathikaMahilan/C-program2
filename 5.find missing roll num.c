#include <stdio.h>

int main() {
    int N;
    printf("Enter total number of students: ");
    scanf("%d", &N);

    int arr[N-1];
    int actualSum = 0;

    printf("Enter %d roll numbers:\n", N-1);
    for(int i = 0; i < N-1; i++) {
        scanf("%d", &arr[i]);
        actualSum += arr[i];
    }

    
    int expectedSum = N * (N + 1) / 2;

    int missingNumber = expectedSum - actualSum;

    printf("Missing roll number is: %d\n", missingNumber);

    return 0;
}