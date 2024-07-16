//calculator.

#include<stdio.h>
int main ()
{
    float num1 , num2 , sum , sub , mul , div , dive ;
    printf ("Input Two numbers-\n");
    printf ("Number 1 = ");
    scanf ("%f", &num1);
    printf ("Number 2 = ");
    scanf ("%f", &num2);

    sum = num1 + num2;
    sub = num1 - num2 ;
    mul = num1 * num2 ;
    div = num1 / num2 ;

    printf ("\n\n\n\nThe Ans\n\n");
    printf ("Sum : %.2f\n", sum);
    printf ("Substitution : %.2f\n", sub);
    printf ("Multiplication : %.2f\n", mul);
    printf ("division : %.2f\n", div);

    getch ();


}
