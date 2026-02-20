#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    // Use prefix sum + hash map approach
    // prefix_sum frequency stored in a simple hash map
    // Count pairs where prefix[i] == prefix[j]
    
    long long prefix[n + 1];
    prefix[0] = 0;
    for (int i = 0; i < n; i++)
        prefix[i + 1] = prefix[i] + arr[i];
    
    long long count = 0;
    
    // O(n^2) check for equal prefix sums
    for (int i = 0; i <= n; i++)
        for (int j = i + 1; j <= n; j++)
            if (prefix[i] == prefix[j])
                count++;
    
    printf("%lld\n", count);
    return 0;
}
