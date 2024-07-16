#include<stdio.h>
int main ()
{
    int a[10][10],t[10][10],i,j,r,c ;
    printf ("Row & Column : ");
    scanf ("%d %d",&r,&c);

    for (i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf ("A[%d][%d] = ",i,j);
            scanf ("%d",&a[i][j]);
        }
    }
    printf ("\n\nA = ");

    for (i=0;i<r;i++)
    {
        printf ("\t");
        for(j=0;j<c;j++)
        {
            printf ("%d ",a[i][j]);

        }
        printf ("\n");
    }
    for (i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            t[i][j]= a[j][i];

        }

    }

     printf ("\n\nTranspose = \n");
    for (i=0;i<c;i++)
    {

        for(j=0;j<r;j++)
        {
            printf ("%d ",t[i][j]);

        }
        printf ("\n");
    }







    return 0;
}
