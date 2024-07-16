#include<stdio.h>
int main ()
{
    int year ;
    printf ("The Year is =  ");
    scanf ("%d", &year);

    if (year%400==0)
        printf ("This is a Leap Year.");
    else if (year%4==0 && year%100!==0)
        printf ("This is a Leap Year");
    else
        printf ("This is not Leap year");
    getch ();

}
