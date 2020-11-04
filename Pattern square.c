#include<stdio.h>
int main ()
{

    int line , n , i;
    printf ("N = ");
    scanf ("%d",&n);
    for (line=1; line<=n; line++)
    {
        if (line==1 || line==n)
        {
            for (i=1; i<=n; i++)
            {
                printf ("*");
            }
        }
        if (line>1 && line<n)
        {
            for (i=1;i<=n;i++)
            {
                if (i==1 || i==n)
                    printf ("*");
                else
                    printf(" ");
            }
        }
        printf ("\n");
    }






    return 0;
}

