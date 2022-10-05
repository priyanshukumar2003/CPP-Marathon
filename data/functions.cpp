#include <iostream>
using namespace std;
int sum(int a, int b)
{
    int c = a + b;
    return c;
}

int main()
{
    int num1, num2, r;
    cout << "Enter two numbers " << endl;
    cin >> num1 >> num2;
    cout << "The sum of two numbers is " << sum(num1, num2);
    // r = sum(num1, num2);
    // cout << "The sum of two numbers is " << r << endl;
    return 0;
}

// NOTE: This works only when main function is written at last. And, fails to recognise any function which is written after main function. And to overcome that we use function prototype.