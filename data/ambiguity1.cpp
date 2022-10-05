#include <iostream>
using namespace std;

class B
{
    public:
        void say()
        {
            cout << "Hello World" << endl;
        }
};

class D : public B
{
    public:
        void say() // This new say function will overwrite say function of B
        {
            cout << "World Hello" << endl;
        }
};

int main()
{
    B b;
    D d;
    b.say();
    d.say();
    return 0;
}