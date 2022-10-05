#include <iostream>
using namespace std;

template <class T>
class Harry
{
    public:
        T data;
        Harry(T a)
        {
            data = a;
        }
        void display();
};

template <class T>
void Harry<T> :: display()
{
    cout << data << endl;
}

template <class T>
void func1(T a)
{
    cout << "I am templatised func " << a << endl;
}

void func(int a)
{
    cout << "I am first func " << a << endl;
}

int main()
{
    // Harry <char> h('A');
    // cout << h.data << endl;
    // h.display();
    func(4); // Exact match takes hightest priority
    func1(4);
    return 0;
} 