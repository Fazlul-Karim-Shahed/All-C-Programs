#include<stdio.h>
int main ()
{
    int first, last , number, i;
    printf("Enter a number: ");
    scanf("%d", &number);

    last = number%10;

    for (i=1; number!=0; i++)
    {
        number = number/10;
        if(number/10==0){break;}
        else{continue;}
    }
    printf("Sum of first and last digit is %d", number+last);


    return 0;
}
