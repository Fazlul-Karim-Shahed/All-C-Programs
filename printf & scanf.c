#include<stdio.h>
int main()
{
    int num1, num2;
    float num3;
    double num4;

    printf ("Take two integer numbers- \n");
    printf ("Number 1 = ");
    scanf ("%d",&num1);
    printf ("Number 2 = ");
    scanf ("%d",&num2);
    printf ("\n\n");
    printf ("Let take a floating number- \n");
    printf ("Number 1 = ");
    scanf ("%f", &num3);
    printf ("\n\n");
    printf ("Now enter a long floating number- ");
    printf ("number 1 =");
    scanf ("%lf",&num4);


    printf ("\n\n\n\nTHE ANS \n");

    printf ("The integer number you entered : %d , %d \n", num1, num2);
    printf ("The floating number you entered : %.2f\n",num3);
    printf ("The long floating number you entered : %.3lf\n",num4);
    printf ("The size of int = %d", sizeof(num1));

    getch ();
}
