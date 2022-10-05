// Pointer of base class can point to derived class.
// But, while calling functions, pointer will call base class functions. [See void display here]
// This is also known as late binding.

#include <iostream>
using namespace std;

class BaseClass
{
    public:
        int var_base = 10;
        void display()
        {
            cout << "VarBase " << var_base << endl;
        }
};

class DerivedClass : public BaseClass
{
    public:
        int var_deriv = 20;
        void display()
        {
            cout << "VarBase " << var_base << endl;
            cout << "VarDeriv " << var_deriv << endl;
        }
};
int main()
{
    BaseClass * baseclass_pointer;
    BaseClass objB;
    DerivedClass objD;

    baseclass_pointer = &objD;
    baseclass_pointer->display();

    DerivedClass * derivedclass_pointer;
    derivedclass_pointer = &objD;
    derivedclass_pointer -> display();
    return 0;
}