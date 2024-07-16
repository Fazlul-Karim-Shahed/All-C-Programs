#include<stdio.h>
int main ()
{

    int age,y,y1,m,m1,d,d1;
    scanf ("%d", &age);

    y = age/365;
    y1 = age %365;
    m = y1/30;
    m1 = y1%30;




    printf ("%d ano(s)\n", y);
    printf ("%d mes(es)\n", m);
    printf ("%d dia(s)\n", m1);

    return 0;
}
