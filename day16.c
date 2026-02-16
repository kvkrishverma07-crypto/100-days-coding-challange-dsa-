#include <stdio.h>

int main() {
    int n;

    // Read the size of the array
    if (scanf("%d", &n) != 1) return 0;

    int arr[n];
    int visited[n]; // Array to keep track of counted elements

    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0; // Initialize visited array with 0
    }

    // Count frequencies
    for (int i = 0; i < n; i++) {
        // If this element has already been counted, skip it
        if (visited[i] == 1) {
            continue;
        }

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = 1; // Mark as visited so we don't count it again
                count++;
            }
        }

        // Print the result in the required format
        printf("%d:%d ", arr[i], count);
    }

    printf("\n");
    return 0;
}
