#include<stdio.h>
int main ()
{
    float x,i,c=0;
    scanf ("%f",&x);


p1:
    for (i=0; i<=25; i++)
    {
        if (x==i)
        {
            c++;
            break;
        }

    }
    if (c!=0)
        printf ("Intervalo [0,25]");
        else
            goto p2;






p2:
    for (i=26; i<=50; i++)
    {
        if (x==i)
        {
            c++;
            break;
        }

    }
    if (c!=0)
    {
        printf ("Intervalo (25,50]");
    }
    else
            goto p3;





p3:
    for (i=51; i<=75; i++)
    {
        if (x==i)
        {
            c++;
            break;
        }

    }
    if (c!=0)
    {
        printf ("Intervalo (50,75]");
    }




p4:
    for (i=76; i<=100; i++)
    {
        if (x==i)
        {
            c++;
            break;
        }

    }
    if (c!=0)
        printf ("Intervalo (75,100]");





















    return 0;
}
