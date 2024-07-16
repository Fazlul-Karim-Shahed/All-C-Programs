
#include<stdio.h>

int main() {
    
    int n, i, j, min;
    int arr[] = {2, 4, 5, 9, 8, 4, 7, 10};
    int length = sizeof(arr) / sizeof(arr[0]);

    min = arr[0];

    for (i = 0; i < length ; i++){

        if(arr[i] < min){
            min = arr[i];
        }

    }

    printf("Min number is - %d \n", min);
}