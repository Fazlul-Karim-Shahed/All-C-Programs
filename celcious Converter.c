#include<stdio.h>
int main ()
{
   float c , f , k ;
   printf ("Temperature Converter\n\n");
   printf ("Celsius = ");
   scanf ("%f",&c);

   f = 1.8*c + 32;
   k = c + 273;


   printf ("\n\n\nKelvin : %.2f\n",k);
   printf ("Fahrenheit : %.2f", f);
   getch ();

}
