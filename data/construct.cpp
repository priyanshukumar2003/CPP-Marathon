#include <iostream>
using namespace std;

class complex
{
    int a, b;
    public:
        complex()
        {
            a = 10;
            b = 0;
        }
        void print()
        {
            cout << a << ' ' << b << endl;
        }
} obj;

int main()
{
    obj.print();
    return 0;
}