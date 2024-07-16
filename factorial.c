#include<stdio.h>
int main ()
{
    while (1){

    int x,fact = 1, i;
    printf (" A = ");
    scanf ("%d", &x);
    for (i=1; i<=x; i++)

        fact = fact * i;

    printf ("%d\n", fact);

    }
    return 0;
}
