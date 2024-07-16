#include<stdio.h>
int main ()
{
    int num[100], max,n,i;
    printf ("N = ");
    scanf ("%d",&n);
    for (i=0;i<n; i++)
    {
        scanf ("%d",&num[i]);
    }
    max = num[0];
    for (i=1;i<n;i++)
    {
        if (num[i]>max)
            max = num[i];
    }
    printf ("Large number is %d ",max);







    return 0;
}

