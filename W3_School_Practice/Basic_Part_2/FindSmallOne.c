
#include<stdio.h>

int main() {

    int i, j, length, temp;
    int arr[] = {7, 2, 4, 2, 6, 8, 8, 12, 2, 5, 4, 9};

    length = sizeof(arr) / sizeof(arr[0]);

    printf("Length of array: %d \n \n", length);


    for (i = 0; i < length; i++)
    {
        for (j = 0; j < length; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Updated array: ");

    for (i = 0; i < length; i++){
        printf("%d ", arr[i]);
    }

        return 0;
}