#include <stdio.h>
int main ()
{

    int  x,i,sum=0;
    scanf ("%d",&x);
    for (i=2; i<=x; i=i+2)
    {
        sum = sum + i;
    }

    printf ("Sum = %d", sum);



    return 0;
}


