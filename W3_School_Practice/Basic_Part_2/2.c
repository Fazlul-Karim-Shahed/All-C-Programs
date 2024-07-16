//  Write a C program that takes a string and two integers (n1, n2). Now reverse the sequence of characters in the string between n1 and n2.
// Sample Date:
// ("abcdxyabcd", 5, 6) -> "abcdyxabcd"
// ("Exercises", 1, 3) -> "exercises"


#include<stdio.h>
#include <string.h>

int main(){

    char str1[100] = {0};
    char str2[100] = {0};
    int i, j, pos1, pos2;

    printf("Enter the string and the 2 positions: ");
    scanf("%s %d %d", str1, &pos1, &pos2);

    strcpy(str2, str1);


    pos1 = pos1 - 1;
    pos2 = pos2 - 1;

    for (i = 0; i < strlen(str1); i++){

        if(i>= pos1 && i<= pos2){

            str1[i] = str2[pos1 + (pos2-i)];

        }
        
    }

    printf("Reverted String is - %s \n", str1);
}