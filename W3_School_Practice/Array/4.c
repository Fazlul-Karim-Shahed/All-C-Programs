// 4. Write a program in C to copy the elements of one array into another array.
// Test Data :
// Input the number of elements to be stored in the array :3
// Input 3 elements in the array :
// element - 0 : 15
// element - 1 : 10
// element - 2 : 12
// Expected Output :
// The elements stored in the first array are :
// 15 10 12
// The elements copied into the second array are :
// 15 10 12

#include<stdio.h>


int main(){

    int array1[100], array2[100], i, j, size;

    printf("Enter size: ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Element %d - ", i + 1);
        scanf("%d", &array1[i]);
    }

    for (i = 0; i < size; i++)
    {
        array2[i] = array1[i];
    }

    printf("Array 2: ");

    for (i = 0; i < size; i++)
    {
        printf("%d ", array2[i]);
    }

    return 0;
}