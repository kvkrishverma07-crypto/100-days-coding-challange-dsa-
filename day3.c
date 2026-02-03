#include <stdio.h>

int main() {
    int n, k, i;
    int comparisons = 0;
    int found_index = -1;
    
    // Read array size
    printf("Enter array size: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Read array elements
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Read key to search
    printf("Enter key to search: ");
    scanf("%d", &k);
    
    // Linear search
    for(i = 0; i < n; i++) {
        comparisons++;  // Count each comparison
        if(arr[i] == k) {
            found_index = i;
            break;  // Stop when found
        }
    }
    
    // Display result
    if(found_index != -1) {
        printf("Found at index %d\n", found_index);
    } else {
        printf("Not Found\n");
    }
    
    printf("Comparisons = %d\n", comparisons);
    
    return 0;
}



