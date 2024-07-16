#include <stdio.h>
int main ()
{

    int  x,i,sum=0;
    scanf ("%d",&x);
    for (i=1; i<=x; i=i+1)
    {
        sum = sum + i;
    }

    printf ("Sum = %d", sum);



    return 0;
}

