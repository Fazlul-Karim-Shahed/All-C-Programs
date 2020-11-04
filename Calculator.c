// A Basic Calculator.

#include <stdio.h>
int main ()
{
    int y;
    float a, b,c,x, x1,x2, d, sum, sub, mul, div, quad, log, sin, cos, tan, root ;
    printf ("Select a number-\n\n");
    printf ("1. Summation\n");
    printf ("2. Subtraction\n");
    printf ("3. Multiplication\n");
    printf ("4. Division\n");
    printf ("5. Quadratic Equation : ax^2 + bx +c = 0\n");
    printf ("6. LogX\n");
    printf ("7. sinX\n");
    printf ("8. cosX\n");
    printf ("9. tanX\n");
    printf ("10. Square Root of X\n");

    scanf ("%d", &y);


    switch (y)
    {
    case 1:
    {
        printf ("\n\nInput a,b\n");
        printf ("A= ");
        scanf ("%f", &a);
        printf ("B= ");
        scanf ("%f", &b);

        sum = a+b;
        printf ("\n\nSum : %.2f", sum);

    }
    break;
    case 2:
    {
        printf ("\n\nInput a,b\n");
        printf ("A= ");
        scanf ("%f", &a);
        printf ("B= ");
        scanf ("%f", &b);

        sub = a-b;
        printf ("\n\nSubtraction : %.2f", sub);

    }
    break;
    case 3:
    {
        printf ("\n\nInput a,b\n");
        printf ("A= ");
        scanf ("%f", &a);
        printf ("B= ");
        scanf ("%f", &b);

        mul = a*b;
        printf ("\n\nMultiplication : %.2f", mul);

    }
    break;
    case 4:
    {
        printf ("\n\nInput a,b\n");
        printf ("A= ");
        scanf ("%f", &a);
        printf ("B= ");
        scanf ("%f", &b);

        div = a/b;
        printf ("\n\nDivision : %.2f", div);


    }
    break;
    case 5:
    {
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
        break;

        }
        switch (d==0)
        {
    case 1:
        {
            printf ("X1 : %.2f\n", x1);
            printf ("X2 : %.2f", x1);
        }
        break;
        }
        switch (d<0)
        {
        case 1:
            printf ("I am learning yet how to process an unreal number.");
        }
        break;
    }
    break;


    case 6:
    {

    }
    case 7:
    {

    }
    case 8:
    {

    }
    case 9:
    {

    }
    case 10:
    {

    }






    }














    getch ();
}
