#include <iostream>
using namespace std;
class complex
{
    int a, b;
    public:
        void setData(int x, int y)
        {
            a = x;
            b = y;
        }
        void printData()
        {
            cout << a << " + " << b << "i" << endl;
        }
        friend complex sumComplex(complex, complex); // This line is important as it tells us that, the function sumComplex is a part of this class and can access private members.
};

complex sumComplex(complex o1, complex o2)
{
    complex o3;
    o3.setData((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}

int main()
{
    complex c1, c2, c3;
    c1.setData(1,2);
    c1.printData();
    c2.setData(3,4);
    c2.printData();

    c3 = sumComplex(c1, c2);
    c3.printData();
    return 0;
}