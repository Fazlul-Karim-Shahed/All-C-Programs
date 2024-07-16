#include <stdio.h>
int main ()
{
    float r,N,v1,v2,v3,v4,v5,v6,v7,v8,v9,v10,v11,v12,vs1,vs2,vs3,vs4,vs5,vs6,vs7,vs8,vs9,vs10,vs11,vs12;

    scanf ("%f", &N);
    r= N*100;

   v1= (int)r/10000;
   vs1= fmod(r,10000);
   v2= (int)vs1/5000;
   vs2= fmod(vs1,5000);
   v3=(int) vs2/2000;
   vs3= fmod(vs2,2000);
   v4=(int)vs3/1000;
   vs4= fmod(vs3,1000);
   v5= (int)vs4/500;
   vs5= fmod(vs4,500);
   v6= (int)vs5/200;
   vs6= fmod(vs5,200);
   v7= (int)vs6/100;
   vs7= fmod(vs6,100);
   v8= vs7/50;
   vs8= fmod(vs7,50);
   v9= vs8/25;
   vs9= fmod(vs8,25);
   v10= vs9/10;
   vs10= fmod(vs9,10);
   v11= vs10/05;
   vs11= fmod(vs10,5);
   v12= vs11/1;
   vs12= fmod(vs11,1);




    printf ("NOTAS:\n");
    printf ("%.0f nota(s) de R$ 100.00\n", v1);
    printf ("%.0f nota(s) de R$ 50.00\n", v2);
    printf ("%.0f nota(s) de R$ 20.00\n", v3);
    printf ("%.0f nota(s) de R$ 10.00\n", v4);
    printf ("%.0f nota(s) de R$ 5.00\n", v5);
    printf ("%.0f nota(s) de R$ 2.00\n", v6);
    printf ("MOEDAS:\n");
    printf ("%.0f moeda(s) de R$ 1.00\n", v7);
    printf ("%.0f moeda(s) de R$ 0.50\n", v8);
    printf ("%.0f moeda(s) de R$ 0.25\n", v9);
    printf ("%.0f moeda(s) de R$ 0.10\n", v10);
    printf ("%.0f moeda(s) de R$ 0.05\n", v11);
    printf ("%.0f moeda(s) de R$ 0.01\n", v12);



    return 0;
}
