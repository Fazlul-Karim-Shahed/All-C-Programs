#include<stdio.h>
int main ()
{
    int x,i,sum=0;
    scanf ("%d",&x);
    for (i=1;i<=x;i++)
    {
        sum=sum+i;
        sum=sum- ++i;
    }

    printf ("1-2+3-4+......+%d = %d",x,sum);





    return 0;
}
