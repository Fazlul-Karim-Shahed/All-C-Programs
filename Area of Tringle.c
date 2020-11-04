/* Area of Triangle when range & length of arms are given.
*/

#include<stdio.h>
int main ()
{
    float a , b , c , s , area ;
    printf ("Triangle Area Calculator\n\n\n");
    printf ("Input the lengths of arms of triangle-\n");
    printf ("First Length = ");
    scanf ("%f", &a);
    printf ("Second Length = ");
    scanf ("%f",&b);
    printf ("Third Length = ");
    scanf ("%f", &c);

    s = ( a + b + c ) / 2 ;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf ("\n\n\nAns:\n");
    printf ("Area of Triangle : %.2f\n",area);
    getch ();


}
