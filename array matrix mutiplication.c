#include<stdio.h>
int main ()
{
    int a[10][10],b[10][10],c[10][10],i,j,r1,c1,r2,c2,sum=0;
    printf ("Enter row & column of First matrix : ");
    scanf ("%d %d", &r1,&c1);
    printf ("Enter row & column of second matrix : ");
    scanf ("%d %d", &r2,&c2);
    for (i=1; c1!=r2; i++)
    {
        printf ("\nError : C1 & R2 must same............................\n\n");
        printf ("Enter Row & Column of First Matrix : ");
        scanf ("%d %d", &r1,&c1);
        printf ("Enter Row & Column of Second Matrix : ");
        scanf ("%d %d", &r2,&c2);

    }

    for (i=0;i<r1;i++)
    {
        for (j=0;j<c1;j++)
        {
            printf ("A[%d][%d]= ",i,j);
            scanf ("%d",&a[i][j]);
        }
    }
    for (i=0;i<r2;i++)
    {
        for (j=0;j<c2;j++)
        {
            printf ("B[%d][%d]= ",i,j);
            scanf ("%d",&b[i][j]);
        }
    }
    for (i=0;i<r1;i++)
    {
        for (j=0;j<c2; j++)
        {
            sum= sum + (a[i][j]*b[j][i]);
        }
        c[i][j]= sum;
    }
    for (i=0;i<r1;i++)
    {
        for (j=0;j<c2; j++)
        {
            printf ("%d ", c[i][j]);
        }
        printf ("\n");
    }










    return 0;
}
