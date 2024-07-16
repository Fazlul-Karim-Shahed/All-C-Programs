#include<stdio.h>
int main ()
{
   char st[100],st1[100];
   int r,count=0,i,j;
   gets (st);
   for (i=0;st[i]!='\0';i++)
   {
       r = ++count;
   }
   for (i=r-1,j=0;i>=0;i--,j++)
   {
       st1[j]=st[i];
   }
   printf ("%s",st1);
   /*for (i=0;st1[i]!='\0';i++)
   {
       printf ("%s",st1[i]);
   }*/



   return 0;
}
