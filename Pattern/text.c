#include <stdio.h>

int main() {
    int n, i;
    long sum = 0;
    long term = 0;

    printf("Input the number of terms: ");
    scanf("%d", &n);


    for (i = 1; i <= n; i++) {
        term = term * 10 + 1; 
        sum += term;           
    }


    printf("The Sum is: %ld\n", sum);

    return 0;
}
