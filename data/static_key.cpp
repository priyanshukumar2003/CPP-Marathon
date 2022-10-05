#include <iostream>
using namespace std;

int sum(int a, int b)
{
    static int c = 0; // This exeutes only once
    c++;
    return (a+b+c);
}

int main()
{
    int a,b;
    cout << "Enter two numbers ";
    cin >> a >> b;
    cout << "The sum of numbers is " << sum(a,b) << endl;
    cout << "The sum of numbers is " << sum(a,b) << endl;
    cout << "The sum of numbers is " << sum(a,b) << endl;
    cout << "The sum of numbers is " << sum(a,b) << endl;
    cout << "The sum of numbers is " << sum(a,b) << endl;
    cout << "The sum of numbers is " << sum(a,b) << endl;
    cout << "The sum of numbers is " << sum(a,b) << endl;
    cout << "The sum of numbers is " << sum(a,b) << endl;
    cout << "The sum of numbers is " << sum(a,b) << endl;
    cout << "The sum of numbers is " << sum(a,b) << endl;
    cout << "The sum of numbers is " << sum(a,b) << endl;
    return 0;
}