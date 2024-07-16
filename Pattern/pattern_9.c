
#include<stdio.h>

int main(){

    int row, col, n;
    printf("Enter row: ");
    scanf("%d", &n);

    for (row = 0; row < n/2; row++){

        for(col=0; col<row; col++){
            printf(" ");
        }
        for (col = 0; col <= n/2 - row; col++){
            printf("* ");
        }

        printf("\n");
    }

    for(row = 0; row <= n/2; row++){
        for (col = 0; col<n/2 - row; col++){
            printf(" ");
        }

        for (col = 0; col <= row; col++){
            printf("* ");
        }

        printf("\n");
    }
}