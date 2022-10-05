#include <iostream>
using namespace std;

class Y;

class X
{
    int val;
    public:
        void setData(int a)
        {
            val = a;
        }
        void display()
        {
            cout << "The value through X is : " << val << endl;
        }
        friend void swapping(X &, Y &);
};

class Y
{
    int val;
    public:
        void setData(int a)
        {
            val = a;
        }
        void display()
        {
            cout << "The value through Y is : " << val << endl;
        }
        friend void swapping(X &, Y &);
};

void swapping(X &x, Y &y)
{
    int temp = x.val;
    x.val = y.val;
    y.val = temp;
}

int main()
{
    X ob1;
    Y ob2;
    ob1.setData(12);
    ob2.setData(13);
    swapping(ob1, ob2);
    ob1.display();
    ob2.display();
    return 0;
}