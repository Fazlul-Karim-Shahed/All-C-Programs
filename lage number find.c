#include<stdio.h>
int main ()
{
    int num1, num2, num3 ;
    printf ("First Number = ");
    scanf ("%d", &num1);
    printf ("Second Number = ");
    scanf ("%d",&num2);
    printf ("Third Number = ");
    scanf ("%d", &num3);

    if ((num1>num2) && (num1>num3))
        printf ("Large number is %d", num1);
    else if ((num2>num1) && (num2>num3))
        printf ("Large number is %d", num2);
    else if ((num3>num1) && (num3>num2))
        printf ("Large number is %d", num3);

    getch ();



}
