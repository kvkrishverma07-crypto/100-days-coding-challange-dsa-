#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n; i++) {
        if (i != 0) printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");
    
    return 0;
}
```

**How it works:**
1. Read `n` (number of elements)
2. Store all integers in an array
3. Print them space-separated

**Output for given example:**
```
10 20 30 40 50
