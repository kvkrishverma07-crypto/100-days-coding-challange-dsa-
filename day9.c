#include <stdio.h>
#include <string.h>

int main() {
    char code[101];  // Array to store the code name (max 100 characters + null terminator)
    
    // Read the input code name
    scanf("%s", code);
    
    // Get the length of the string
    int len = strlen(code);
    
    // Print characters in reverse order
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", code[i]);
    }
    printf("\n");
    
    return 0;
}
```

**How it works:**

1. **Input**: Reads the code name using `scanf()`
2. **Length**: Calculates string length using `strlen()`
3. **Reverse**: Loops from the last character (index `len-1`) to the first (index `0`)
4. **Output**: Prints each character in reverse order

**Example Run:**
```
Input:  hello
Output: olleh
