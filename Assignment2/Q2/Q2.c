/***
*Name:S.Sara Ali
*Des:
*Date:27-october-23
***/
  #include<stdio.h>
int min(int a, int b, int c) {
    int smallest = a;

    if (b < smallest) {
        smallest = b;
    }
    
    if (c < smallest) {
        smallest = c;
    }
    
    return smallest;
}
#include <stdio.h>

int main() {
    int matrix[100][100];
    
    int rows, cols;
	int i,j;
    printf("Enter the number of rows and columns: ");
    scanf("%1d %1d", &rows, &cols);

    printf("Enter the elements of the binary matrix (0 or 1):\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
}
	printf("\nThe matrix yout entered is as following:\n");
	for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    int max = 0;
    int max_i = 0;
    int max_j = 0;
    int dp[100][100];

    // Initialize the first row and column of dp[][]
    for (i = 0; i < rows; i++) {
        dp[i][0] = matrix[i][0];
        if (matrix[i][0] == 1) {
            max = 1;
            max_i = i;
            max_j = 0;
        }
    }
    for (j = 0; j < cols; j++) {
        dp[0][j] = matrix[0][j];
        if (matrix[0][j] == 1) {
            max = 1;
            max_i = 0;
            max_j = j;
        }
    }

    // Build the dp[][] table
    for ( i = 1; i < rows; i++) {
        for (j = 1; j < cols; j++) {
            if (matrix[i][j] == 1) {
                dp[i][j] = 1 + min(dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]);
                if (dp[i][j] > max) {
                    max = dp[i][j];
                    max_i = i;
                    max_j = j;
                }
            } else {
                dp[i][j] = 0;
            }
        }
    }

    // Print the row and column numbers for the largest square submatrix
    printf("Row and Column numbers for 1s in the largest square submatrix:\n");
    for ( i = max_i; i > max_i - max; i--) {
        for (j = max_j; j > max_j - max; j--) {
            if (matrix[i][j] == 1) {
                printf("(%d,%d)\n", i, j);
            }
        }
    }

    return 0;
}



