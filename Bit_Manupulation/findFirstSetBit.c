// Problem 2. Find the position of the rightmost set bit
// Practice this problem

// The idea is to unset the rightmost bit of number n and XOR the result with n. Then the rightmost set bit in n will be the position of the only set bit in the result. Note that if n is odd, we can directly return 1 as the first bit is always set for odd numbers.

// For example, the number 20 in binary is 00010100, and the position of the rightmost set bit is 3.


#include<stdio.h>

int main(){

    int num = 0xA;

    int pos = 0;

    printf("%b\n", num);

    for (int i = 0; i < 32; i++)
    {
        if (num & 1)
        {
            break;
        }
        else{
            
            pos++;
            num = num >> 1;
        }
    }

    printf("position %d", pos);
    

    return 0;
}