#include<stdio.h>
int main ()
{
    int line , n , i;
    printf ("N = ");
    scanf ("%d", &n);
    for (line=1; line<=n; line++)
    {
        for(i=1; i<=line; i++ )
        {
            if (i%2==0)
                printf ("0 ");
            else
                printf ("1 ");
        }
        printf ("\n");
    }





    return 0;
}
