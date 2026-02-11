#include <stdio.h>

int main() {
    int m, n, i, j;
    
    // Read dimensions
    scanf("%d %d", &m, &n);
    
    int matrix1[m][n], matrix2[m][n], result[m][n];
    
    // Read first matrix
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    // Read second matrix
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    // Add matrices
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    
    // Print result
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d", result[i][j]);
            if (j < n - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
