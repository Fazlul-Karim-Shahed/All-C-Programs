// 3. Write a program in C to find the sum of all elements of the array.
// Test Data :
// Input the number of elements to be stored in the array :3
// Input 3 elements in the array :
// element - 0 : 2
// element - 1 : 5
// element - 2 : 8
// Expected Output :
// Sum of all elements stored in the array is : 15

#include<stdio.h>

int main(){

    int array[100], n, size, i, sum = 0;

    printf("Enter array size: ");

    scanf("%d", &size);

    for (i = 0; i <size; i++)
    {
        printf("Element %d: ", i+1);
        scanf("%d", &array[i]);

        sum += array[i];
    }
    printf("Sum: %d", sum);

    return 0;
}

