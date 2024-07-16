#include<stdio.h>
int main ()
{
    double x, r,r1,r2,r3,r4,r5,r6,r7,r8,r9,r10,r11;
    int d,d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11;
    scanf ("%lf",&x);
    printf ("NOTAS:\n");

    d=x/100;
    r= fmod (x,100.00);

    d1= r/50;
    r1= fmod (r,50.00);

    d2= r1/20;
    r2= fmod (r1,20.00);

    d3= r2/10;
    r3= fmod (r2,10.00);

    d4= r3/5;
    r4= fmod (r3,5.00);

    d5= r4/2;
    r5= fmod (r4,2.00);

    printf ("%d nota(s) de R$ 100.00\n",d);
    printf ("%d nota(s) de R$ 50.00\n",d1);
    printf ("%d nota(s) de R$ 20.00\n",d2);
    printf ("%d nota(s) de R$ 10.00\n",d3);
    printf ("%d nota(s) de R$ 5.00\n",d4);
    printf ("%d nota(s) de R$ 2.00\n",d5);


    printf ("MOEDAS:\n");


    d6= r5/1;
    r6= fmod (r5,1.00);

    d7= r6/.4999;
    r7= fmod (r6,.4999);

    d8= r7/.24999;
    r8= fmod (r7,.24999);

    d9= r8/.09999;
    r9= fmod (r8,.09999);

    d10= r9/.04999;
    r10= fmod (r9,.04999);

    d11= r10/.009999;



    printf ("%d moedas(s) de R$ 1.00\n",d6);
    printf ("%d moedas(s) de R$ 0.50\n",d7);
    printf ("%d moedas(s) de R$ 0.25\n",d8);
    printf ("%d moedas(s) de R$ 0.10\n",d9);
    printf ("%d moedas(s) de R$ 0.05\n",d10);
    printf ("%d moedas(s) de R$ 0.01\n",d11);
















    return 0;
}

