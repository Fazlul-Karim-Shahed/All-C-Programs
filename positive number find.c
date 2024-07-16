#include<stdio.h>
int main ()
{
    int num ;
    printf ("A = ");
    scanf ("%d", &num);

    if (num>0)
        printf ("The number is positive\n");
    else if (num==0)
        printf ("The number is neither even nor odd \n");
    else
        printf ("The number is negative");
}
