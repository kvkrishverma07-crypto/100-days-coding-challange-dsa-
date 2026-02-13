#include <stdio.h>

int main() {
    int r, c;
    
    // Read dimensions
    scanf("%d %d", &r, &c);
    
    int matrix[r][c];
    
    // Read matrix elements
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Define boundaries
    int top = 0, bottom = r - 1;
    int left = 0, right = c - 1;
    
    // Traverse in spiral order
    while (top <= bottom && left <= right) {
        
        // Traverse top row from left to right
        for (int i = left; i <= right; i++) {
            printf("%d ", matrix[top][i]);
        }
        top++;
        
        // Traverse right column from top to bottom
        for (int i = top; i <= bottom; i++) {
            printf("%d ", matrix[i][right]);
        }
        right--;
        
        // Traverse bottom row from right to left (if row exists)
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                printf("%d ", matrix[bottom][i]);
            }
            bottom--;
        }
        
        // Traverse left column from bottom to top (if column exists)
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                printf("%d ", matrix[i][left]);
            }
            left++;
        }
    }
    
    printf("\n");
    
    return 0;
}
