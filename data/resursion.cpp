#include <iostream>
using namespace std;

// Program to find sum to numbers 1 to 10
int sum(int a)
{
    if(a==0)
        return 0;
    else
        return (a+sum(a-1));
}

// Factorial of 6 using recursion
int factorial(int a)
{
    if(a==0)
        return 1;
    else
        return (a * factorial(a-1));
}

// Fibonacci Series upto 6
int fibo(int a)
{
    if(a<2)
        return 1;
    return ( fibo(a-2) + fibo(a-1) );
}

// Main Function
int main()
{
    cout << "Sum of numbers upto 10 : " << sum(10) << endl;
    cout << "Factorial of 6 : " << factorial(6) << endl;
    cout << "Fibonacci Series at 6th position : " << fibo(6) << endl;
    return 0;
}