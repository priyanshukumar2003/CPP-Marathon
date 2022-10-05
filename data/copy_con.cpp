#include <iostream>
using namespace std;
class Copy
{
    int a;
    public:
        Copy(){ a =0; };
        Copy(int n)
        {
            a = n;
        }
        Copy(Copy &obj) // If there is no copy constructor in a program then compilr provides one by itself.
        {
            cout << "CC invoked" << endl;
            a = obj.a;
        }
        void disp()
        {
            cout << a << endl;
        }
};

int main()
{
    Copy x, y, z(45), z3;
    x.disp();
    y.disp();
    z.disp();
    Copy z1(x); // Copy Constructor Invoked
    z1.disp();
    Copy z2(z); // Copy Constructor Invoked
    z2.disp();
    z3 = z;  // Copy Constructor Not Invoked
    z3.disp();
    Copy z4 = z;
    z4.disp(); // Copy Constructor Invoked
    return 0;
}