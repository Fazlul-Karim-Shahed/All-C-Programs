#include<stdio.h>
int main ()
{
    int num[7]= {5,10,15,20,5,46,6},i,x,count=0;
    printf ("Enter number : ");
    scanf ("%d",&x);
    for(i=0;i<7;i++)
    {
        if (x==num[i])
        {
            count++;
            break;

        }


    }
    if (count==0)
        printf ("Error");
    else
    {
        printf ("yes");
            printf ("position %d",i+1);
    }





    return 0;
}

