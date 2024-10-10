// 19. Write a program in C for adding two matrices of the same size.
// Test Data :
// Input the size of the square matrix (less than 5): 2
// Input elements in the first matrix :
// element - [0],[0] : 1
// element - [0],[1] : 2
// element - [1],[0] : 3
// element - [1],[1] : 4
// Input elements in the second matrix :
// element - [0],[0] : 5
// element - [0],[1] : 6
// element - [1],[0] : 7
// element - [1],[1] : 8
// Expected Output :
// The First matrix is :

// 1 2
// 3 4
// The Second matrix is :

// 5 6
// 7 8
// The Addition of two matrix is :

// 6 8
// 10 12



#include<stdio.h>

int main(){

    int i,j, row, col, pos;
    int matrix1[100][100];
    int matrix2[100][100];
    int sum_matrix[100][100];

    printf("Enter row: ");
    scanf("%d", &row);

    printf("Enter column: ");
    scanf("%d", &col);


    printf("Enter the first matrix element: \n");
    for (i = 0; i <row; i++){

        for (j = 0; j < col; j++){

            printf("Row %d Col %d: ", i,j);
            scanf("%d", &matrix1[i][j]);
        }
        
        
    }

    printf("Enter the second matrix element: \n");
    for (i = 0; i <row; i++){

        for (j = 0; j < col; j++){

            printf("Row %d Col %d: ", i,j);
            scanf("%d", &matrix2[i][j]);
        }
        
        
    }

    printf("Your entered matrix 1 : \n");

    for (i = 0; i <row; i++){

        for (j = 0; j < col; j++){

            printf("%d ", matrix1[i][j]);
        }

        printf("\n");

    }


    printf("Your entered matrix 2 : \n");

    for (i = 0; i <row; i++){

        for (j = 0; j < col; j++){

            printf("%d ", matrix2[i][j]);
        }

        printf("\n");

    }


    for (i = 0; i <row; i++){

        for (j = 0; j < col; j++){

            sum_matrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }

    }


    printf("Sum of the two matrix : \n");

    for (i = 0; i <row; i++){

        for (j = 0; j < col; j++){

            printf("%d ", sum_matrix[i][j]);
        }

        printf("\n");

    }





}
