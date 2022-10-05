#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 4;
    cout << "The numbers are : " << endl;
    
    // Arithmetic Operators

    cout << "Sum : " << a+b << endl;
    cout << "Difference : " << a-b << endl;
    cout << "Product : " << a*b << endl;
    cout << "Quotient : " << a/b << endl;
    cout << "Remainder : " << a%b << endl;
    cout << "Pre-Increment : " << ++a << endl;
    cout << "Pre-Decrement : " << --a << endl;
    cout << "Post-Increment : " << a++ << endl;
    cout << "Post-Decrement : " << a-- << endl;
    // Increment and Decrement aren't functioning as intended. My advice learn about them from their tutorials and not from here.

    // Assignment Operators -> Used to assign values to variables.

    // Comparison Operatos
    cout << " a==b " << (a==b) << endl;
    cout << " a!=b " << (a!=b) << endl;
    cout << " a<=b " << (a<=b) << endl;
    cout << " a>=b " << (a>=b) << endl;
    cout << " a<b " << (a<b) << endl;
    cout << " a>b " << (a>b) << endl;

    // Logical Operators
    cout << "Logical AND " << ((a==b)&&(a<=b)) << endl;
    cout << "Logical OR " << ((a==b)||(a<=b)) << endl;
    cout << "Logical NOT " << !(a==b) << endl;

    // Bitwise Operatos -> Not Taught. There is a separate program file for that.

    return 0;
}