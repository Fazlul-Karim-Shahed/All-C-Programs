// Problem 1. Check if a positive integer is a power of 2 without using any branching or loop.
// As discussed above, the expression n & (n-1) will unset the rightmost set bit of a number. If the number is a power of 2, it has only a 1–bit set, and n & (n-1) will unset the only set bit. So, we can say that n & (n-1) returns 0 if n is a power of 2; otherwise, it’s not a power of 2.

// 1000
// 1000


#include<stdio.h>

int main(){

    int x = 0xF;
    int i;

    
    printf("Hex : %x\n",x);
    printf("Equivalent : %x\n",x%10);
    // printf("%b\n",1<<0);
    // printf("%b\n", x ^ 1<<0);

    for (i; i < 32; i++){

        // printf("%b\n", x);
        // printf("%b\n", 1<<i);
        // printf("%b\n", x ^ (1<<i));
        // printf("%b\n\n\n",( x ^ (1<<i)) == 0);


        if((x ^ (1<<i)) == 0){
            printf("Its power of 2");
            break;
        }
        else if(i == 31){
            printf("Its not power of 2");
        }
    }
    
    return 0;
}