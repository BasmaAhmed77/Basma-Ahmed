// problem 4.       Fibonacci 


#include<iostream>

using namespace std;

int fib(int n)
{
    if (n > 1)
        return fib(n - 1) + fib(n - 2);
    else if (n == 1)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n);
    return 0;
}