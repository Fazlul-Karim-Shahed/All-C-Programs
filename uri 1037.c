#include<stdio.h>
int main ()
{
    double i,x;
    scanf ("%lf",&x);

    if (x>=0.00 && x<=25.0000)
        printf ("Intervalo [0,25]");

    else if (x>=25.00001 && x<=50.0000000)
        printf ("Intervalo (25,50]");

    else if (x>=50.000001 && x<=75.0000000)
        printf ("Intervalo (50,75]");

    else if (x>=75.000001 && x<=100.000000)
        printf ("Intervalo (75,100]");

    else
        printf ("Fora de intervalo");










    return 0;
}

