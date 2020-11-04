#include<stdio.h>
int main ()
{
    int i,r,count=0;
    char s1[100],s2[100];
    printf ("Paragraph1 : ");
    gets (s1);
    printf ("Paragraph2 : ");
    gets (s2);


    for (i=0;s1[i]!='\0' ||  s2[i]!='\0';i++)
    {
        if (s1[i]!=s2[i])

        ++count;
    }
    if (count==0)
        printf ("same");
    else
        printf ("Not same");








    return 0;
}
