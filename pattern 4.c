#include<stdio.h>
int main ()
{
    int line , n , i;
    printf ("N = ");
    scanf ("%d",&n);
    for (line=1; line<=n; line++)
    {
        for (i=1; i<=line; i++)
        {
            printf (" %c ",i+64);
        }
        printf (" \n");

    }







    return 0;
}
