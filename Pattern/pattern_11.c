
#include<stdio.h>

int main(){

    int row, col, n;
    printf("Enter row: ");
    scanf("%d", &n);

    for (row = 0; row<n; row++){

        if(row == n-1){

            for (col = 0; col < n; col++){
                printf("* ");
            }

        }
        else{
            for (col = 0; col < n-row-1; col++){
                printf(" ");
            }

            for (col = 0; col <= row; col++){
                if(col==0 || col==row){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }

            printf("\n");
        }


    }


}