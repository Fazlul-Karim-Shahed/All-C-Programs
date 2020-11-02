#include<stdio.h>
int main()
{

    int firstNumber, secondNumber, result;
    printf("Enter the first number: ");
    scanf("%d", &firstNumber);
    printf("Enter Second Number: ");
    scanf("%d", &secondNumber);

    result = firstNumber + secondNumber;

    printf("Sum = %d", result);



    return 0;
}

