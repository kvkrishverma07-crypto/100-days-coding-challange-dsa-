#include <stdio.h>

int main() {
    int m, n;
    
    // Read dimensions
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);
    
    // Declare matrix
    int matrix[m][n];
    
    // Read matrix elements
    printf("Enter matrix elements:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Check if matrix is square
    if (m != n) {
        printf("Not a Symmetric Matrix\n");
        return 0;
    }
    
    // Check if matrix is symmetric
    int isSymmetric = 1;  // Assume symmetric initially
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;  // Not symmetric
                break;
            }
        }
        if (!isSymmetric) {
            break;
        }
    }
    
    // Print result
    if (isSymmetric) {
        printf("Symmetric Matrix\n");
    } else {
        printf("Not a Symmetric Matrix\n");
    }
    
    return 0;
