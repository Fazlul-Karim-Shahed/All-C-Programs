
// 5. Write a program in C to count the total number of duplicate elements in an array.
// Test Data :
// Input the number of elements to be stored in the array :3
// Input 3 elements in the array :
// element - 0 : 5
// element - 1 : 1
// element - 2 : 1
// Expected Output :
// Total number of duplicate elements found in the array is : 1


#include<stdio.h>


int main(){

    int array[100], duplicate[100], i, j, size, k=0, m;

    printf("Enter size: ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Element %d - ", i + 1);
        scanf("%d", &array[i]);
    }

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if(array[i] == array[j] && i!=j){

                for (m = 0; m < k; m++)
                {
                    if(array[i] == duplicate[m]){
                        break;
                    }
                    
                }

                if (m==k)
                {
                    duplicate[k] = array[i];
                    k++;
                }
                
                
                break;
            }
        }
        
    }

    printf("Duplicate value: ");
    for (i = 0; i < k; i++)
    {
        printf("%d ", duplicate[i]);
    }

    return 0;
}