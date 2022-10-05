// More on variables here
#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    float b = 3.15;
    char c = 'a';
    bool d = true;
    cout << "The integer value is " << a << endl << "The float value is " << b << "\nThe char value is " << c << endl;
    cout << "The boolean value is " <<  d; // Now, what happens here is the compiler treats bool as 0 or 1 instead of false and true.
    return 0;
}