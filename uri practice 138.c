#include<stdio.h>
int main ()
{
    int x,y;
    float p,r;
    scanf ("%d %d", &x,&y);
    if (x==1)
    {
        p=4.00;
        r= (float)y * p;
        printf ("Total: R$ %.2f\n",r);
    }
    else if (x==2)
    {
        p=4.50;
        r= (float)y * p;
        printf ("Total: R$ %.2f\n",r);
    }
    else if (x==3)
    {
        p=5.00;
        r= (float)y * p;
        printf ("Total: R$ %.2f\n",r);
    }
    else if (x==4)
    {
        p=2.00;
        r= (float)y * p;
        printf ("Total: R$ %.2f\n",r);
    }
    else if (x==5)
    {
        p=1.50;
        r= (float)y * p;
        printf ("Total: R$ %.2f\n",r);
    }












    return 0;
}
