
#include<stdio.h>

int main(){

    int row, col, n;

    printf("Enter row: ");
    scanf("%d", &n);

    for ( row = 0; row < n; row ++){

        for (col = 0; col < row; col ++){
            printf(" ");
        }

        for (col = 0; col < n - 1; col ++){
            printf("* ");
        }

            printf("\n");
    }
    
}