 #include<stdio.h>
int main ()
{
    char s[100],s1[30];
    int count=0,i,r;

    gets (s);
    gets(s1);

    for (i=0;s[i]!='\0';i++)
    {
        r=++count;
    }
    for (i=0;s1[i]!='\0';i++)
    {
        s[r+i]=s1[i];
    }




    printf ("%s",s);





    return 0;
}

