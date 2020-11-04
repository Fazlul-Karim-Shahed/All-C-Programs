#include<stdio.h>
int main ()
{
    int line , n, i;
    printf ("N = ");
    scanf ("%d",&n);
    for (line=n ; line>=1; line--)
    {
       for (i=1; i<=n-line; i++)
       {
           printf (" ");
       }

       for (i=1; i<=line ; i++)
       {
           printf ("%d",i);
       }
       printf ("\n");




    }










 return 0;
}
