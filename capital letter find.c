#include<stdio.h>
int main ()
{
    char letter;

    printf ("Enter a letter = ");
    scanf ("%c", & letter);

    if (letter>='A' && letter<='Z')
        printf ("Capital letter");
    else if (letter>='a' && letter<='z')
        printf ("Small letter");
    getch ();
}
