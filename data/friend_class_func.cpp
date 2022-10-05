#include <iostream>
using namespace std;

// Forward Declaration
class complex;

class calculator
{
    public:
        int sum(int p, int q)
        {
            return (p +q);
        }
        int sumRealComplex(complex, complex);
};

class complex
{
    int a, b;
    friend int calculator :: sumRealComplex(complex, complex);  // Declaring a function as friend
    // Alter : Declaring entire class as friend.
    // friend class class_name
    public:
        void getData(int x, int y)
        {
            a = x;
            b = y;
        }
        void printData()
        {
            cout << "You output : " << a << " + " << b << "i" << endl;
        }
};

int calculator :: sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int main()
{
    complex ob1, ob2;
    calculator calc;
    ob1.getData(1,2);
    ob2.getData(5,6);
    ob1.printData();
    ob2.printData();
    int res = calc.sumRealComplex(ob1, ob2);
    cout << "The sum of real part of o1 and o2 is : " << res << endl;
    return 0;
}