#include<stdio.h>
int main ()
{
    char st[1000]="jhf wqejuh" ;
    int i,capital=0,small=0,space=0,words=0,letter=0 ;
    gets (st);

    for (i=0;st[i]!='\0';i++)
    {


        if (st[i]==' ')
        {
            ++space;

        }

        ++letter;


    }



    printf ("Capital Letters : %d\n",capital);
    printf ("Small Letters : %d\n",small);
    printf ("Letters : %d\n",letter-space);
    printf ("Words : %d\n",space+1);











    return 0;
}
