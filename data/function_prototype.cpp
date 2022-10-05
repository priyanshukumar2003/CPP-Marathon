#include <iostream>
using namespace std;

int sum (int a, int b); // <-- Acceptable
// int sum (int, int)  <-- Acceptable
// int sum (int a, b)  <-- Not Acceptable
void g ();  // <-- Acceptable
// void g (void);  <-- Acceptable

int main()
{
    g();
    int num1, num2;
    cout << "Enter two numbers ";
    cin >> num1 >> num2;
    cout << "The sum of two numbers is " << sum(num1, num2) << endl;
    return 0;
}

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

void g()
{
    cout << "Greetings Programmer" << endl;
}