#include<stdio.h>
int main()
{
    double n1,n2,n3,n4,n5,avg,avg1 ;
    scanf("%lf %lf %lf %lf", &n1,&n2,&n3,&n4);

    avg = ((n1*2)+ (n2*3)+ (n3*4)+ (n4*1))/10;

    printf ("Media: %.1lf\n",avg);

    if (avg>=7.0)
        printf ("Aluno aprovado.\n");
    else if (avg<5.0)
        printf ("Aluno reprovado.\n");
    else if (avg>=5.0 && avg<=6.9)
    {
        printf ("Aluno em exam.\n");
        printf ("Nota do exam: ");
        scanf ("%lf",&n5);

        avg1 = (avg+n5)/2;

        if (avg1>=5.0)
            printf ("Aluno aprovado.\n");
        else if (avg1<=4.9)
            printf ("Aluno reprovado.\n");

        printf ("Media final: %.1lf\n",avg1);



    }







    return 0 ;
}
