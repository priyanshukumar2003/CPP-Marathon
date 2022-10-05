#include <iostream>
using namespace std;
class CLaSS
{
    private:
        int a, b, c;
    public:
        int d, e;
        void display();
};

void CLaSS :: display()
{
    a = d;
    b = e;
    c = d + e;
    cout << "The value of a is " << a << endl;
    cout << "The value of b is " << b << endl;
    cout << "The value of c is " << c << endl;
    cout << "The value of d is " << d << endl;
    cout << "The value of e is " << e << endl;
}

int main()
{
    CLaSS ob;
    ob.d = 1;
    ob.e = 2;
    ob.display();
    return 0;
}