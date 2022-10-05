#include <iostream>
using namespace std;

class complex
{
    int a, b;
    public:
        complex()
        {
            a = 0;
            b = 0;
        }
        void print()
        {
            cout << a << ' ' << b << endl;
        }
} ob;

int main()
{
    ob.print();
    return 0;
}