
// 22. Write a program in C to find the transpose of a given matrix.
// Test Data :
// Input the rows and columns of the matrix : 2 2
// Input elements in the first matrix :
// element - [0],[0] : 1
// element - [0],[1] : 2
// element - [1],[0] : 3
// element - [1],[1] : 4
// Expected Output :
// The matrix is :

// 1 2
// 3 4

// The transpose of a matrix is :
// 1 3
// 2 4




#include<stdio.h>

int main(){

    int i,j, row, col, pos;
    int matrix[100][100];
    int transpose_matrix[100][100];

    printf("Enter row: ");
    scanf("%d", &row);

    printf("Enter column: ");
    scanf("%d", &col);

    for (i = 0; i <row; i++){

        for (j = 0; j < col; j++){

            printf("Row %d Col %d: ", i,j);
            scanf("%d", &matrix[i][j]);
        }
        
        
    }

    for (i = 0; i <row; i++){

        for (j = 0; j < col; j++){
            transpose_matrix[j][i] = matrix[i][j];
        }

    }


    printf("Your entered matrix : \n");

    for (i = 0; i <row; i++){

        for (j = 0; j < col; j++){

            printf("%d ", matrix[i][j]);
        }

        printf("\n");

    }

    printf("Transpose matrix : \n");

    for (i = 0; i <col; i++){

        for (j = 0; j < row; j++){

            printf("%d ", transpose_matrix[i][j]);
        }

        printf("\n");

    }






}

