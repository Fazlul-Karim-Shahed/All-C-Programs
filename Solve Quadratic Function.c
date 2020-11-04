//Solve a Quadratic Function.

#include<stdio.h>
int main()
{
    float a,b,c,d, x1, x2;

    printf ("Enter the coefficients a,b,c\n\n\n");
    printf ("A= ");
    scanf ("%f", &a);
    printf ("B= ");
    scanf ("%f", &b);
    printf ("C= ");
    scanf ("%f", &c);

    d = sqrt(b*b -4*a*c);
    x1 = (-b +d) / (2*a);
    x1 = (-b -d) / (2*a);

    switch (d>0)
    {
    case 1:
    {
        printf ("X1 : %.2f", x1);
        printf ("X2 : %.2f", x2);
    }

    }
    switch (d==0)
    {
    case 1:
    {
        printf ("X1 : %.2f\n", x1);
        printf ("X2 : %.2f", x1);
    }
    }
    switch (d<0)
    {
    case 1:
        printf ("I am learning yet how to process an unreal number.");
    }

}
