#include <iostream>
using namespace std;
int c = 100;
int main()
{
    int a, b, c;
    cout << "Enter the value of a and b : " << endl;
    cin >> a >> b;
    c = a + b;
    cout << "The value of LOCAL c is : " << c << endl;
    cout << "The value of GLOBAL c is : " << ::c << endl; // Use scope resolution operator to access GLOBAL variable, even though there is a LOCAL variable of same name.
    return 0;
}