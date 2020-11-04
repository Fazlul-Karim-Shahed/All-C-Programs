#include<stdio.h>
int main ()
{
    int a[10][10],line , i , r , c, sum=0,sum1=0;
    printf ("Row & Column: ");
    scanf ("%d %d",&r,&c);
    for (i=1;r!=c;i++)
    {
        printf ("Error: Row & Column must same................\n\n");
        printf ("Row & Column: ");
        scanf ("%d %d",&r,&c);

    }
    for (line=0;line<r;line++)
    {
        for (i=0;i<c;i++)
        {
            printf ("A[%d][%d] = ",line,i);
            scanf ("%d",&a[line][i]);
        }
    }

    printf ("A = \n");
    for (line=0;line<r;line++)
    {
        for (i=0;i<c;i++)
        {
            printf ("%d ",a[line][i]);

        }
        printf ("\n");
    }

    for (line=0;line<r;line++)
    {
        for (i=line+1;i<c;i++)
        {
            sum=sum+a[line][i];
        }
    }
    printf ("\nUpper Result = %d",sum);

    for (line=0;line<r;line++)
    {
        for (i=0;i<line;i++)
        {
            sum1=sum1+a[line][i];
        }
    }
    printf ("\nLower Result = %d",sum1);





    return 0;
}
