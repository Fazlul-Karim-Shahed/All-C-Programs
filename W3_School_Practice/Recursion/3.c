
// 3. Write a program in C to print the Fibonacci Series using recursion. >
// Test Data :
// Input number of terms for the Series (< 20) : 10
// Expected Output:

//  Input number of terms for the Series (< 20) : 10                                
//  The Series are :                                                                
//  1  1  2  3  5  8  13  21  34  55

int count = 0;
int sum = 1;

void fibonacci(int n)
{

    int current = 1;
    int res;

    if (count > n)
    {
        return 0;
    }
    res = sum + current;
    printf("%d ", res);

    return current + fibonacci(res);
}