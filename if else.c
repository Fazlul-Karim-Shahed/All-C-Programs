#include<stdio.h>
int main ()
{
    int num1, num2 ;
    printf ("first number = ");
    scanf ("%d", &num1);
    printf ("second number = ");
    scanf ("%d", &num2);

    if (num1>num2)
        printf ("\n\nLarge number is %d", num1);

    else if (num1<num2)
        printf ("\n\nLarge number is %d", num2);

    else
        printf ("\n\nNumber is equal");
    getch ();

}
