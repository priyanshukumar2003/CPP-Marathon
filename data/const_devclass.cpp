#include <iostream>
using namespace std;

class Base1
{
    int data1;
    public:
        Base1(int i)
        {
            data1 = i;
            cout << "Base1 class Constructor" << endl;
        }
        void dispB1()
        {
            cout << "The value of data1 is " << data1 << endl;
        }
};

class Base2
{
    int data2;
    public:
        Base2(int i)
        {
            data2 = i;
            cout << "Base2 class Constructor" << endl;
        }
        void dispB2()
        {
            cout << "The value of data2 is " << data2 << endl;
        }
};

class Derived : public Base1, public Base2
{
    int derived1, derived2;
    public:
        Derived(int a, int b, int c, int d) : Base2(a), Base1(b) // even though we have writtenBase2 before Base1 still Base1 constructor is called before that of Base2. 
        {
            derived1 = c;
            derived2 = d;
        }
        void dispD()
        {
            cout << "The vlaue of derived1 is " << derived1 << endl;
            cout << "The vlaue of derived2 is " << derived2 << endl;
        }
};

int main()
{
    Derived dev(1,2,3,4);
    dev.dispD();
    dev.dispB2();
    dev.dispB1();
    return 0;
}