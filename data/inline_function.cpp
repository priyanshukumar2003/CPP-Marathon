#include <iostream>
using namespace std;
inline int product(int a, int b)
{
    return (a*b);
}

int main()
{
    int a,b;
    cout << "Enter two numbers ";
    cin >> a >> b;
    cout << "The product of a and b is " << product(a,b);
    return 0;
}