#include<stdio.h>
int main ()
{
    int i,r,count=0;
    char s1[100],s2[100];
    printf ("Paragraph1 : ");
    gets (s1);
    printf ("Paragraph2 : ");
    gets (s2);
    r = strcmp(s1,s2);

    if (r==0)
        printf ("same");
    else
        printf ("not same");




    return 0;
}

