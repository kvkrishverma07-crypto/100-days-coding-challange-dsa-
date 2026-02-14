#include <stdio.h>

int main() {
    int n, i, j;
    int isIdentity = 1;  // Flag to track if matrix is identity (1 = yes, 0 = no)
    
    // Input: Read the size of the matrix
    printf("Enter the size of matrix: ");
    scanf("%d", &n);
    
    int matrix[n][n];
    
    // Input: Read the matrix elements
    printf("Enter the matrix elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Check if the matrix is an Identity Matrix
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            // Check diagonal elements (should be 1)
            if(i == j) {
                if(matrix[i][j] != 1) {
                    isIdentity = 0;
                    break;
                }
            }
            // Check non-diagonal elements (should be 0)
            else {
                if(matrix[i][j] != 0) {
                    isIdentity = 0;
                    break;
                }
            }
        }
        if(isIdentity == 0) {
            break;
        }
    }
    
    // Output: Print the result
    if(isIdentity == 1) {
        printf("Identity Matrix\n");
    }
    else {
        printf("Not an Identity Matrix\n");
    }
    
    return 0;
}

