// A program that prints integer, floating , double and character number.


#include<stdio.h>
int main()
{
    int num1 =10,num2 =20 ;
    float num3= 10.5;
    double num4= 15.789;
    char ch = 'S';

    printf ("the integer numbers are %d,%d\n",num1,num2);
    printf ("the floating number = %.1f\n",num3);
    printf ("The last number is %.3lf\n",num4);
    printf ("This is written by %c",ch);

    getch ();
}
