#include<stdio.h>
int main ()
{
    int x, i , c=0 ;
    scanf ("%d",&x);
    for (i=2 ; i<x; i++)
    {
        if (x%i==0)
        {
          c++;
           break;
        }

    }
    if (c==0)
     printf ("Prime");
        else
            printf ("Not Prime");


    return 0;
}
