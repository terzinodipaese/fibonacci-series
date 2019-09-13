#include <iostream>

static long long int FIB[1000] = {0};

using namespace std;



//recursive technique with memoization, best way to compute the Fibonacci series
long long int fibonacci(int n)      
{
    if((n == 0) || (n == 1)) return n;
    if(FIB[n]) return FIB[n];
    
    FIB[n] = fibonacci(n-1) + fibonacci(n-2);
    
    return FIB[n];
}
