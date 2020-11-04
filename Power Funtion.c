#include<stdio.h>
int main ()
{
    int x , y , result;
    printf ("A = ");
    scanf ("%d", &x);
    printf ("B = ");
    scanf ("%d", & y);
    result = pow (x,y);
    printf ("Result : %d", result);
    getch ();

}
