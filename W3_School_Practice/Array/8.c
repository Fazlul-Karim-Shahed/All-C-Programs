
#include <stdio.h>

int main(){

    int length, i, j, count, freq, temp1, temp2;
    int arr[] = { 3, 6, 7, 2, 5, 2, 4, 9, 5, 3, 7, 4,4,4};
    

    length = sizeof(arr) / sizeof(arr[0]);

    int unique[length];
    int arr2[length];
    unique[0] = arr[0];
    count = 1;

    // find unique

    for (i = 0; i < length; i++){

        for (j = 0; j < count; j++){
            if (arr[i] == unique[j]){
                break;
            }
        }

        if(j == count){
            unique[count] = arr[i];
            count++;
        }
    }

    // check freq

    for (i = 0; i < count; i++){

        freq = 0;

        for (j = 0; j < length; j++){
            if(unique[i] == arr[j]){
                freq++;
            }
        }

        arr2[i] = freq;
        freq = 0;
        
    }

    for (i = 0; i < count; i++){
        for (j = 0; j < count; j++){
            if(arr2[j] < arr2[j+1]){
                temp1 = arr2[j + 1];
                arr2[j + 1] = arr2[j];
                arr2[j] = temp1;


                temp2 = unique[j + 1];
                unique[j + 1] = unique[j];
                unique[j] = temp2;

            }
        }
    }

        for (i = 1; i <= count; i++)
        {
            printf("%d comes %d times \n", unique[i], arr2[i]);
        }
}


