/*
10|123|

*/


#include<stdio.h>
int main ()
{
    int number, i, count =0;
    scanf("%d", &number);

    for(i=1; number!=0 ; i++)
    {

        number = number/10;
        count++;
    }
    printf ("%d", count);


    return 0;
}
