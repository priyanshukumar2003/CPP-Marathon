#include <iostream>
using namespace std;

/* Syntax for initialisation list in constructor
    constructor (argument-list) : initialisation-secton
    {
        assignment + other code;
    }
*/

class Test
{
     int a,b;
     public:
        Test(int i, int j) : a(i), b(a + j)
        {
            cout << "Constructor Executed" << endl;
            cout << a << ' ' << b << endl;
        }
};
 
int main()
{
    Test t(4,6);
    return 0;
}