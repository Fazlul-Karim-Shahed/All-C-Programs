#include<stdio.h>
int main ()
{
    char st1[100],st2[100],temp[100];
    int i,count =0;

    printf("Enter a Line : ");
    gets (st1);
    //strcpy(temp,st1);
    strcpy(st2,st1);
    strrev(st2);
    //strcpy(st2,st1);
    printf ("%s",st2);

    i = strcmp(st1,st2);
    if (i==0)
        printf ("\n\nmilce\n");
    else
        printf ("\n\nmile nai\n");










    return 0;
}
