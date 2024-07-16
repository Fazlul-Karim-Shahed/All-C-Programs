#include<stdio.h>

int main(){

    int row, col, n, state;

    printf("Enter row: ");
    scanf("%d", &n);

    state = n/2;

    for(row = 0; row < state; row++){

        for(col=0; col < state - row; col++){
            printf(" ");
        }

        for (col = 0; col <= row; col ++){
            printf("* ");
        }

            printf("\n");
    }

    

    for (row = 0 ; row <= state; row++){

        for (col = 0; col < row; col++){
            printf(" ");
        }

        for (col = 0; col < state - row + 1; col++){
            printf("* ");
        }

            printf("\n");
    }

    
}

