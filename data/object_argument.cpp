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
        void setDatabySum(complex o1, complex o2)
        {
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }
        void printData()
        {
            cout << "Your output : " << a << " + " << b << endl;
        }
};

int main()
{
    complex c1, c2, c3;
    c1.setData(1,2);
    c1.printData();

    c2.setData(3,4);
    c2.printData();

    c3.setDatabySum(c1, c2);
    c3.printData();
    return 0;
}