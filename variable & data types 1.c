                                                                                                                                                                                                                                                                                                                                 // A program that takes a number and print that number .

#include<stdio.h>
int main()
{
    int number1 , number2;
    float number3;
    printf ("Please press two integer numbers\n");
    printf ("Number 1= ");
    scanf ("%d",&number1);
    printf ("Number 2= ");
    scanf ("%d", &number2);
    printf ("Again Please press a floating number : ");
    scanf ("%f",&number3);
    printf ("\n\n\nThe Ans:\n");
    printf(" The integer number you have pressed : %d , %d\n", number1,number2);
    printf(" The floating number you have pressed : %.2f", number3);
    getch ();

}
