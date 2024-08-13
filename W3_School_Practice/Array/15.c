// 15. Write a program in C to delete an element at a desired position from an array.
// Test Data :
// Input the size of array : 5
// Input 5 elements in the array in ascending order:
// element - 0 : 1
// element - 1 : 2
// element - 2 : 3
// element - 3 : 4
// element - 4 : 5
// Input the position where to delete: 3
// Expected Output :
// The new list is : 1 2 4 5

#include<stdio.h>

int delete(int array[], int size, int pos){

    int i;

    for (i = pos-1; i < size-1; i++){

        array[i] = array[i + 1];
    }
    
}


int main(){

    int i, n, pos;
    int array[100];

    printf("Enter length of array: ");
    scanf("%d", &n);

    for (i = 0; i <n; i++)
    {
        printf("Element %d: ", i+1);
        scanf("%d", &array[i]);
    }

    printf("Your entered array : ");

    for (i = 0; i <n; i++)
    {
        printf("%d ", array[i]);
    }


    printf("\nPosition you want to delete: ");
    scanf("%d", &pos);

    delete (array, n, pos);

    printf("\nFinal array: : ");

    for (i = 0; i <n-1; i++)
    {
        printf("%d ", array[i]);
    }


}
