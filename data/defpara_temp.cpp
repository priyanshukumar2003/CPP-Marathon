#include <iostream>
using namespace std;

template <class T1, class T2 = char>
class myClass
{
    public:
    T1 data1;
    T2 data2;
    myClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << this->data1 << this->data2 << endl;
    }
};

int main()
{
    myClass <float> obj(12.33,'A');
    obj.display();
    return 0;
}