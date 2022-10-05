#include <iostream>
using namespace std;

class complex
{
    int a, b;
    public:
        complex(int x, int y)
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
    // Implicit Call
    complex a(1,2);
    complex b = complex(3,4);
    a.print();
    b.print();
    return 0;
}