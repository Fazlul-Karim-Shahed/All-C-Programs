// Celsius Fahrenheit converter using switch case .

#include<stdio.h>
int main ()
{
    int num;
    float celsius, fahrenheit ;

    printf ("1. Celsius to Fahrenheit\n");
    printf ("2. Fahrenheit to Celsius\n\n\n");
    printf ("Enter a number whatever you want to find = ");
    scanf ("%d", &num);

    switch (num)
    {

    case 1 :
        {
            printf ("\nTemperature in Celsius = ");
            scanf ("%f", &celsius);
            fahrenheit = 1.8*celsius + 32;
            printf ("\n\nTemperature in Fahrenheit : %.2f\n", fahrenheit);
        }
        break;
        case 2 :
        {
            printf ("\nTemperature in Fahrenheit = ");
            scanf ("%f", &fahrenheit);
            celsius = .56*fahrenheit - 17.78 ;
            printf ("\n\nTemperature in Fahrenheit : %.2f\n", celsius);
        }
    }
    getch ();



}
