#include<stdio.h>
int main ()
{
    int x,r,sum=0,fact,i,k,num;
    printf ("Enter A Number : ");
    scanf ("%d", &num);
    x=num;
    for (k=10; x>0; x=x/10)
    {
        r=x%k;
        fact=1;
        for (i=1; i<=r; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact ;


    }



    if (sum==num)
        printf ("Strong Number");
    else
        printf ("Not strong number");





    return 0;
}
