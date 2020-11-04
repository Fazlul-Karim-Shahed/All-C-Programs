#include<stdio.h>
int main ()
{
    char ch[20];
    double s , p , result;

    scanf ("%s",&ch);
    scanf ("%lf",&s);
    scanf ("%lf",&p);

    result = s + (p * .15);

    printf ("Total = R$ %.2lf\n", result);
    return 0;


}
