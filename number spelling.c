#include<stdio.h>
int main ()
{
    int digit;
    printf ("Enter a digit = ");
    scanf ("%d", &digit);

    if (digit==0)
        printf ("Zero\n");
    else if (digit==1)
        printf ("one\n");
    else if (digit==2)
        printf ("Two\n");
    else if (digit==3)
        printf ("Three\n");
    else if (digit==5)
        printf ("Five\n");
    else if (digit==6)
        printf ("Six\n");
    else if (digit==7)
        printf ("Seven\n");
        else
            printf ("not found");
}
