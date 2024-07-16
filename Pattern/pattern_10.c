

#include<stdio.h>

int main(){

    int row, col, n;

    printf("Enter row: ");
    scanf("%d", &n);

    for (row = 0; row < n; row++){
        if(row == 0 || row == n -1){

            for (col = 0; col < n - 1; col++){
                printf("*");
            }

            printf("\n");
        }else{

            for (col = 0; col < n-1; col++){
                if(col==0 || col==n-2){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }

            printf("\n");
        }
    }
}