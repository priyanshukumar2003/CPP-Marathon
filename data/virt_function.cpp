// Pointer of base class can point to derived class.
// But, while calling functions, pointer will call base class functions. [See void display here]
// This is also known as late binding.

#include <iostream>
using namespace std;

class BaseClass
{
    public:
        int var_base = 10;
        virtual void display() // Without virtual, this will be shown as output.
        {
            cout << "VarBase " << var_base << endl;
        }
};

class DerivedClass : public BaseClass
{
    public:
        int var_deriv = 20;
        void display() // With virtual on Ln12, this will be shown as output.
        {
            cout << "VarBase " << var_base << endl;
            cout << "VarDeriv " << var_deriv << endl;
        }
};
int main()
{
    BaseClass * bc_ptr;
    DerivedClass * dc_ptr;
    BaseClass objB;
    DerivedClass objD;

    bc_ptr = &objD;
    bc_ptr -> display(); // This will show baseclass display. This will show derivedclass display after making changes in Ln12
    return 0;
}