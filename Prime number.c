#include<stdio.h>
int main ()
{
    int x,i,count=0;

    printf ("Enter a integer number : ");
    scanf ("%d", &x);
    for (i=2; i<x; i++)
    {
        if (x%i==0)
        {
            count ++;
        break;
        }
    }
    if (count == 0)
        printf ("Prime Number\n");
    else
    printf ("Not Prime Number\n ");







    return 0;
}
