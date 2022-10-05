// You can find the question and my answer to the problem in exercise1.cpp
/*  1. The type of inheritance being used is multiple inheritance.
    2. Mode of inheritance in public
    4. 
*/
#include <iostream>
#include <math.h>
using namespace std;

class SimpleCalculator
{
    int a,b;
    public:
        void getDataSimple()
        {
            cout << "Enter two numbers : ";
            cin >> a >> b;
        }
        void performSimple()
        {
            cout << "Value of a + b is " << (a+b) << endl;
            cout << "Value of a - b is " << (a-b) << endl;
            cout << "Value of a * b is " << (a*b) << endl;
            cout << "Value of a / b is " << (a/b) << endl;
        }
};

class ScientificCalculator
{
    int a,b;
    public:
        void getDataScientific()
        {
            cout << "Enter number : ";
            cin >> a;
        }
        void performScientific()
        {
            cout << "Value of sin(a) is " << sin(a) << endl;
            cout << "Value of cos(a) is " << cos(a) << endl;
            cout << "Value of tan(a) is " << tan(a) << endl;
            cout << "Value of exp(a) is " << exp(a) << endl;
        }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
};

int main()
{
    HybridCalculator calc;
    calc.getDataSimple();
    calc.performSimple();
    calc.getDataScientific();
    calc.performScientific();
    return 0;
}