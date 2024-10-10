// 23. Write a program in C to find the sum of the right diagonals of a matrix.
// Test Data :
// Input the size of the square matrix : 2
// Input elements in the first matrix :
// element - [0],[0] : 1
// element - [0],[1] : 2
// element - [1],[0] : 3
// element - [1],[1] : 4
// Expected Output :
// The matrix is :
// 1 2
// 3 4
// Addition of the right Diagonal elements is :5
// Elements in array are:




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

        for (j = 0; j < col; j++){
            if(i==j){
                sum += matrix[i][j];
            }
        }

    }


    printf("Your entered matrix : \n");

    for (i = 0; i <row; i++){

        for (j = 0; j < col; j++){

            printf("%d ", matrix[i][j]);
        }

        printf("\n");

    }

    printf("Right diagonal of the matrix: %d", sum);
}

