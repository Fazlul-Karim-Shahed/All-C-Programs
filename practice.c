#include <stdio.h>
int main ()
{

    int number, result, last, x;
    scanf("%d", &number);

    last = number%10;
    while(number!=0)
    {
        x = number%10;
        number = number/10;
    }
    printf("%d", last);
    printf("%d", number);
    return 0;
}
