// 4. Write a C program that accepts two sequences ((a1, a2, .. an), (b1, b2, .. bn)) of integers as input. Find all integers that appear in both sequences, one by one, in ascending order.
// Constraints:

// 1≤N1≤100, N1 -> number of integers in first sequence.
// 1≤N2≤100, N2 -> number of integers in second sequence.
// 1 ≤ ai≤ 100 ( 1 ≤ i ≤ N1 )
// 1 ≤ bj≤ 100 ( 1 ≤ j ≤ N2 )
// Sample Date:

// ( 1 2 3 1 2 3 4) -> 1 2 3
// ( 1 2 3 1 2 3) -> 1 2 3
// (1 2 3 4 5 6) ->


#include<stdio.h>
#include<string.h>

int main(){

    int i, j, n, length1, length2, temp;
    int arr1[] = {1,2,5,4,3};
    int arr2[] = {2, 3, 5, 8, 9, 10};
    int result[] = {};
    int count = 0;

    length1 = sizeof(arr1) / sizeof(arr1[0]);
    length2 = sizeof(arr2) / sizeof(arr2[0]);



    for(i = 0; i < length1; i++){

        for (j = 0; j < length2; j++){
            if(arr1[i] == arr2[j]){
                result[count] = arr1[i];
                count++;
            }
        }
    }

    

    for (i = 0; i < count; i++){
        for (j = 0; j < count; j++){
            if(result[j] > result[j+1]){
                temp = result[j];
                result[j] = result[j + 1];
                result[j + 1] = temp;
            }
        }
    }


    for (i = 0; i < count; i++){
        printf("%d th element - %d \n", i, result[i]);
    }

    return 0;
}
