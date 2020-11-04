#include<stdio.h>
int main ()
{

    int number, i, first , last;

    scanf("%d", &number);
    last = number%10;

    for (i=1; number!=0; i++)
    {
        number = number/10;
        if(number/10==0){break;}
        else{continue;}

    }
     printf("First digit = %d\n", number);
     printf("Last digit = %d\n", last);



    return 0;
}
