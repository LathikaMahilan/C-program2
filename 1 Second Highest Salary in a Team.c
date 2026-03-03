#include <stdio.h>
#include <limits.h>

int main() {
    int n;

    // Read number of employees
    scanf("%d", &n);

    if (n < 2) {
        printf("No second highest salary\n");
        return 0;
    }

    int arr[n];

    // Read salaries
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        printf("No second highest salary\n");
    } else {
        printf("%d\n", secondLargest);
    }

    return 0;
}