
// Problem 3. Add 1 to an integer
// The expression -~x will add 1 to an integer x. We know that to get negative of a number, invert its bits and add 1 to it (Remember negative numbers are stored in 2’s complement form), i.e.

#include<stdio.h>

int main(){

    int x = 6;

    printf("%d", -~x);

    return 0;
}