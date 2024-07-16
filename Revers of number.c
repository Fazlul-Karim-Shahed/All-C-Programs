#include<stdio.h>
int main ()
{

    int x,i,rev=0,r,y;


    scanf ("%d", &x);
    y=x;
    for (i=10;y>0;y=y/10)
    {

        r=y%i;
        rev= rev*10 +r;
    }


    if (x==rev)
        printf ("Palindrome");
    else
    printf ("Not Palindrome");






    return 0;
}
