#include<stdio.h>
int main ()
{
    float x , result;

    printf ("Enter a integer number = ");
    scanf ("%f", &x);

    result = 1 + 1/(x+(1/x));

    printf ("\nResult : %f", result);
    getch ();

}
