#include <iostream>
using namespace std;

// Base Class
class Operations
{
    int a, b;
    public:
        void input(int x, int y)
        {
            a = x;
            b = y;
        }
        int add()
        {
            return ( a + b );
        }
        int sub()
        {
            return ( a - b );
        }
        int mul()
        {
            return ( a * b );
        }
};

class Calculator : Operations
{
    public:
        void sum(int x, int y)
        {
            input(x,y);
            cout << "The sum is : " << add() << endl;
        }
        void diff(int x, int y)
        {
            input(x,y);
            cout << "The difference is : " << sub() << endl;
        }
        void prod(int x, int y)
        {
            input(x,y);
            cout << "The product is : " << mul() << endl;
        }
};

int main()
{
    Calculator calc;
    int p = 10, q = 20;
    calc.sum(p,q);
    calc.diff(p,q);
    calc.prod(p,q);
    return 0;
}