#include<stdio.h>
int main ()
{

    int N, h , h1 , min, min1 ;
    scanf ("%d", &N);

    h = N/3600;
    h1 = N%3600;
    min = h1 / 60;
    min1 = h1%60;


    printf ("%d:%d:%d\n", h,min, min1);





    return 0;
}
