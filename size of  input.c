/*size of different variables*/

#include<stdio.h>
int main()
{
    int number1 , number2;
    float number3 ;
    double number4 ;

    printf ("Press a integer number1 = ");
    scanf ("%d", &number1);
    printf ("Press the integer number2 = ");
    scanf ("%d", &number2);
    printf ("Press a floating number= ");
    scanf ("%f",&number3);
    printf ("\n\n\n");

    printf ("The size of integer number 1 : %d Bytes\n",sizeof(number1));
    printf ("The size of integer number 2 : %d Bytes\n",sizeof (number2));
    printf ("The size of floating number : %d Bytes\n",sizeof(number3));

    getch ();


}
