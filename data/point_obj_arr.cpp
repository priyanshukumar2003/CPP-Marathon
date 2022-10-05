#include <iostream>
using namespace std;

class Complex
{
    int real, imag;
    public:
        void getData()
        {
            cout << "Real Part : " << real << endl;
            cout << "Imaginary Part : " << imag << endl;
        }
        void setData(int a, int b)
        {
            real = a;
            imag = b;
        }
};

int main()
{
    Complex comp;
    // Complex *ptr = &comp;
    Complex *ptr  = new Complex;
    // (*ptr).setData(1,4); is same as
    ptr -> setData(1,4);
    // (*ptr).getData(); is same as
    ptr -> getData();
    return 0;
}