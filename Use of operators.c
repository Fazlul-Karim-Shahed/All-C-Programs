//sum and average.

#include<stdio.h>
 int main()
{
    float base , height , result ;
    printf ("Triangle Area Calculator\n\n");
    printf ("Please input- \n");
    printf ("Base = ");
    scanf ("%f",&base);
    printf ("Height = ");
    scanf ("%f",&height);

    result = .5 * base * height ;
    printf ("\n\n\nThe Ans:\n");
    printf ("Area of Trinagle : %.2f", result);
    getch ();

}
