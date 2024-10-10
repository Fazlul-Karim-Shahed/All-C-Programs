// Write a program in C to find the sum of rows and columns of a matrix.
// Test Data :
// Input the size of the square matrix : 2
// Input elements in the first matrix :
// element - [0],[0] : 5
// element - [0],[1] : 6
// element - [1],[0] : 7
// element - [1],[1] : 8
// Expected Output :
// The First matrix is :
// The matrix is :
// 5 6
// 7 8
// The sum or rows and columns of the matrix is :
// 5 6 11
// 7 8 15

// 12 14


#include<stdio.h>

int main(){

    int i,j, row, col, sum;
    int matrix[100][100];

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

    sum = 0;

    for (i = row-1; i>=0; i--){

        sum = 0;

        for (j = 0; j < col; j++){
            sum += matrix[i][j];
        }
        matrix[i][col] = sum;

    }

    printf("Your entered matrix : \n");

    for (i = 0; i <row; i++){

        for (j = 0; j < col; j++){

            printf("%d ", matrix[i][j]);
        }

        printf("\n");

    }

    printf("Final matrix: \n");

    for (i = 0; i <row; i++){

        for (j = 0; j < col+1; j++){

            printf("%d ", matrix[i][j]);
        }

        printf("\n");

    }


}

