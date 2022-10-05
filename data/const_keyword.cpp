#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const int a = 12;
    cout << "The value of a : " << a << endl;
    //a = 45; -> This will produce an error. 
    cout << "The changed value of a : " << a << endl;

    // Manipulators
    /* endl -> used to create new lines.
       setw(n) -> Set width of output.
    */
    int b = 20;
    cout << "Value of a  without setw " << b << endl;
    cout << "Value of a with setw(1) " << setw(1) << b << endl;
    cout << "Value of a with setw(2) " << setw(2) << b << endl;
    cout << "Value of a with setw(3) " << setw(3) << b << endl;
    cout << "Value of a with setw(4) " << setw(4) << b << endl;
    cout << "Value of a with setw(5) " << setw(5) << b << endl;

    // For operator precedence check NOTES.md
    return 0;
}