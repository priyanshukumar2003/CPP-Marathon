#include <iostream>
using namespace std;

int & swapReference(int &a, int &b) // Swapping using Reference Variables
{
    int temp = a;
    a = b;
    b = temp;
    return a;
}

int main()
{
    int a = 5, b = 4;
    cout << "The value of a and b before swapping " << a << "  " << b << endl;
    swapReference(a, b) = 12;  // This will set a to 12. As the function swapReference is returning address of a.
    cout << "The value of a and b after swapping " << a << "  " << b << endl;
    return 0;
}