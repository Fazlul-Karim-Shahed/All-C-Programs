// 6. Write a program in C to print all unique elements in an array.
// Test Data :
// Print all unique elements of an array:
// ------------------------------------------
// Input the number of elements to be stored in the array: 4
// Input 4 elements in the array :
// element - 0 : 3
// element - 1 : 2
// element - 2 : 2
// element - 3 : 5
// Expected Output :
// The unique elements found in the array are:
// 3 5


#include<stdio.h>

int main(){

    int array[100], unique[100], i, j, count,m=0;

    printf("Enter size: ");
    scanf("%d", &count);

    for (i = 0; i < count; i++)
    {
        printf("Element %d - ", i + 1);
        scanf("%d", &array[i]);
    }

    for ( i = 0; i < count; i++)
    {
        for ( j = 0; j < count; j++)
        {
            if(array[i] == array[j] && i != j){
                break;
            }
        }

        if(j==count){
            unique[m] = array[i];
            m++;
        }
        
    }


     printf("Unique array: ");

    for (i = 0; i < m; i++)
    {
        printf("%d ", unique[i]);
    }
    

    return 0;
}