#include <stdio.h>

int main() {
    int n, pos;

    // 1. Get the size of the array
    scanf("%d", &n);

    int arr[n];

    // 2. Input the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 3. Get the 1-based position to delete
    scanf("%d", &pos);

    // 4. Shift elements to the left starting from the deletion point
    // We start at 'pos - 1' because C arrays start at 0
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // 5. Print the updated array (now with n-1 elements)
    for (int i = 0; i < n - 1; i++) {
        printf("%d", arr[i]);
        if (i < n - 2) {
            printf(" ");
        }
    }

    return 0;
}
