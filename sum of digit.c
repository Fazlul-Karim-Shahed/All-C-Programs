#include<stdio.h>
int main ()
{

    int x,i,sum=0,r;
    printf ("Enter A Digit = ");
    scanf ("%d", &x);
    for (i=10; x>0; x=x/10)
    {
        r=x%i;
        sum=sum+r;
    }

    printf ("Sum of the digit is : %d",sum);



    return 0;
}
