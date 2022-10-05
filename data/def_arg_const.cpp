#include <iostream>
using namespace std;
class Simple
{
    int a, b;
    public:
        Simple(int x, int y = 10)
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
    Simple s1(2);
    s1.print();
    Simple s2(5,6);
    s2.print();
    return 0;
}