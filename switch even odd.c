#include<stdio.h>
int main()
{
    int x;
    printf ("Enter a number = ");
    scanf ("%d", &x);

    switch (x%2)
    {
    case 0:
        printf ("Even");
        break;
    default :
        printf ("Odd");

    }

    getch();
}
