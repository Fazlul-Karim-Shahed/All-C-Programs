#include<stdio.h>
int main ()
{
    float a , result;

    printf ("Enter any number\n\n");
    printf ("A = ");
    scanf ("%f", &a);

    result = sqrt (a);

    printf ("\nSquare Root of A : %.2f\n", result);
    getch ();

}
