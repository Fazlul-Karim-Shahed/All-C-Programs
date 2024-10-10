// 2. Write a program in C to calculate the sum of numbers from 1 to n using recursion.
// Test Data :
// Input the last number of the range starting from 1 : 5
// Expected Output:

// The sum of numbers from 1 to 5 : 
// 15

#include<stdio.h>

int sumPrint(int n){
    
    if(n == 0){
        return 0;
    }

    return n + sumPrint(n - 1); // 5 4 3 2
}

int main(){

    printf("%d", sumPrint(5));
}

