#include <iostream>
using namespace std;

template <class T1, class T2> // The process is very simple. Just add another class with another variable
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
    myClass <int, char> obj(12,'A'); // Pass two data types here like so
    obj.display();
    return 0;
}