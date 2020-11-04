#include<stdio.h>
int main()
{
    char lower;
    printf ("Type a lowercase letter- ");
    scanf ("%c",&lower);
    printf ("\n\n\n");

    printf ("The uppercase letter is - %c", lower-32);
    getch ();


}
