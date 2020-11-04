#include<stdio.h>
int main()
{
    int x , y , result;
    printf ("A = ");
    scanf ("%d",&x);

    y = x++ ;
    result = 2*x ;
    printf ("\n ans : %d\n", y);
    printf ("%d", result);
    getch ();



}
