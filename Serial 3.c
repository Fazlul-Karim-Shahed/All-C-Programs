// 1*2 + 2*3 + 3*4 +........+ n1*n2

#include<stdio.h>
int main ()
{
    int a=1,b=2,mul,sum=0,n1,n2;
    scanf ("%d %d", &n1,&n2);
    for (a && b; a<=n1 && b<=n2; a++ && b++)
    {
        mul = a * b;
        sum = sum + mul;
    }
    printf ("1*2 + 2*3 + 3*4 + ..........+ %d*%d = %d",n1,n2,sum);







    return 0;
}
