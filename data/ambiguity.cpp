// Ambiguity means the confusion that occurs when two base classes have functions with matching names. And, what to do in that case.
#include <iostream>
using namespace std;

class Base1
{
    public:
        void greet()
        {
            cout << "Good Morning" << endl;
        }
};

class Base2
{
    public:
        void greet()
        {
            cout << "How are you ?" << endl;
        }
};

class Derived : public Base1, public Base2
{
    public:
        void greet()
        {
            Base1 :: greet();
        }
};

int main()
{
    Base1 b1;
    Base2 b2;
    Derived d;
    b1.greet();
    b2.greet();
    d.greet();
    return 0;
}