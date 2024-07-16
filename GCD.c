#include<stdio.h>
int main ()
{
    int x,y,i,gcd;
    printf ("Enter First Number = ");
    scanf ("%d", &x);
    printf ("Enter Second Number = ");
    scanf ("%d", &y);
    for (i=1; i<x && i<y; i++)
    {
        if (x%i==0 && y%i==0)
            gcd=i;
    }

    printf ("The GCD is : %d", gcd);


    return 0;
}
