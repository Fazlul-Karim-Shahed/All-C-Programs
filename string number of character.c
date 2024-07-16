#include<stdio.h>
int main ()
{
    char st[1000];
    int i,count=0,r,r1;
    gets(st);

    for (i=0;st[i]!='\0';i++)
    {
        r= ++count;
    }
    printf ("%d\n",r);
    /*r1= strlen(st);
    printf ("%d",r1 );*/





    return 0;
}

