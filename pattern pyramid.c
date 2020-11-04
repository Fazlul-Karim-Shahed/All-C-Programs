/*

 12
1234
*/
#include<stdio.h>
int main ()
{
    int line , n , i,s=0;
    printf ("N = ");
    scanf ("%d",&n);
    for (line=1 ; line<=n ; line++)
    {
        for (i=1; i<=n-line; i++)
        {
            printf (" ");
        }
        for (s=1 ; s<=line; s++)
        {
            printf ("%d",s);
        }
        printf ("\n");
    }





    return 0;
}
