// Pointer -> It is a variable that holds address of another variable.
#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *b = &a;
    // * is (value at) dereference operator. & is address operator
    cout << "Value of a " << a << endl;
    cout << "Address of a " << &a << endl;
    cout << "Value of a through b " << *b << endl;
    cout << "Value actually stored in b " << b << endl;
    cout << "Address of b " << &b << endl;
    return 0;
}