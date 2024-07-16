#include<stdio.h>
int main ()
{
    int line,n,i;
    printf ("N = ");
    scanf ("%d",&n);
    for (line=1; line<=n; line++)
    {
        for (i=1; i<=n-line; i++)
        {
            printf (" ");
        }
        for(i=1; i<=line; i++)
        {
            printf ("%d",i);
        }
        for (i=line-1; i>=1; i--)
        {
            printf ("%d",i);
        }
        printf ("\n");
    }





    return 0;
}
