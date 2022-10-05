#include <iostream>
using namespace std;

class Complex
{
    int a, b;
    public:
        Complex(int x)
        {
            a = x;
            b = 0;
        }
        Complex(int x, int y)
        {
            a = x;
            b = y;
        }
        void print()
        {
            cout << a << ' ' << b << endl;
        }
};

int main()
{
    Complex c1(10);
    c1.print();

    Complex c2(2,5);
    c2.print();

    return 0;
}