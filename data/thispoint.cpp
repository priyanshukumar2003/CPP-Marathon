// this keyword is a pointer which points to the object wwhich invokes the member function
#include <iostream>
using namespace std;

class A
{
    int a;
    public:
        void setData(int a)
        {
            this -> a = a;
        }
        void getData()
        {
            cout << a << endl;
        }
};

int main()
{
    A a;
    a.setData(4);
    a.getData();
    return 0;
}