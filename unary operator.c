#include<stdio.h>
int main ()
{

    int a , x , y ;
    printf ("A = ");
    scanf ("%d", &a);

    x = a--;
    y = a;

    printf ("Ans :\nX= %d\n", x);
    printf ("Y = %d", y);
}
