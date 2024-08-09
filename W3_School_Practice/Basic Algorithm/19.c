
// Write a C program that checks if a given non-negative integer is a multiple of 13 or one more than a multiple of 13. For example, if the given integer is 26 or 27, the program will return true, but if it is 25 or 28, the program will return false.


#include<stdio.h>
#include<stdlib.h>

int test(int n);

int main(){

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("%d", test(num));

}

int test(int num){
    
    if((num%13==0) || (num%13==1)){
        return 1;
    }
    else{
        return 0;
    }
}