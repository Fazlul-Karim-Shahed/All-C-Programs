
// 18. Write a program in C for a 2D array of size 3x3 and print the matrix.
// Test Data :
// Input elements in the matrix :
// element - [0],[0] : 1
// element - [0],[1] : 2
// element - [0],[2] : 3
// element - [1],[0] : 4
// element - [1],[1] : 5
// element - [1],[2] : 6
// element - [2],[0] : 7
// element - [2],[1] : 8
// element - [2],[2] : 9
// Expected Output :
// The matrix is :

// 1 2 3
// 4 5 6
// 7 8 9


#include<stdio.h>

int main(){

    int i,j, row, col, pos;
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

    printf("Your entered matrix : \n");

    for (i = 0; i <row; i++){

        for (j = 0; j < col; j++){

            printf("%d ", matrix[i][j]);
        }

        printf("\n");

    }





}

