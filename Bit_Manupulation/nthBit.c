


#include<stdio.h>

int main(){

    int x = 0x123456;
    int n, y = 0x100;

    
    printf("Hex : %x\n",x);
    printf("Bin : %b\n",x);
    printf("Decimal : %d\n",x);
    // printf("Result : %x\n",x & 0xF);
    printf("Result : %x\n", x/0x100);
    // printf("Result in decimal : %d\n",x & 0xFF);



    return 0;
}