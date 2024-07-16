#include <stdio.h>
int main ()
{
    int x ;
    printf ("YOUR NUMBER - ");
    scanf ("%d", &x);

    if (x>=80)
        printf ("\n\nYou got A+");

    else  if (x>=80)
        printf ("\n\nYou got A+");
    else  if (x>=70)
        printf ("\n\nYou got A");
    else  if (x>=60)
        printf ("\n\nYou got A-");
    else  if (x>=50)
        printf ("\n\nYou got B");
    else  if (x<=49)
        printf ("\n\nYou Failed");
    getch ();


}
