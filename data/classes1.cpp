/* EXPLANATION
    Here, var a, b, c are private. So, if we try to declare them apart from by using functions written in the class. We cannot.
    Whereas we are easily able to declare var d, e easily using class object as they are declared public.
*/

#include <iostream>
using namespace std;

class CLass
{
    private:
        int a, b, c;
    public:
        int d, e;
        void input(int, int, int);
        void display()
        {
            cout << "The value of a is " << a << endl;
            cout << "The value of b is " << b << endl;
            cout << "The value of c is " << c << endl;
            cout << "The value of d is " << d << endl;
            cout << "The value of e is " << e << endl;
        }
};

void CLass :: input(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    CLass ob;
    ob.input(1,2,3);
    ob.d = 20;
    ob.e = 10;
    ob.display();
    return 0;
}