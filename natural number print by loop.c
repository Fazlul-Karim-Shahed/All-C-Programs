// 6. loop practice.

#include<stdio.h>
int main ()
{
    int x,y , sum = 0;

    printf ("A = ");
    scanf ("%d", &y);
    for (x=1 ; x<=y;x++)
    {

        sum = sum + x;
        printf ("\n\nSum = %d\n", sum);
        break;
    }


    return 0;
}
