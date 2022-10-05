// Exercise 1
/*  Create 2 classes:
    1. SimpleCalculator --> Takes input of two numbers using a utility function. And, performs + - * /
    2. ScientificCalculator --> Takes input and performs any four scientific operations.

    Create another class HybridCalculator and inherit it using these 2 classes:
    1. What type of inheritance are you using ?
    2. Which mode of inheritance are you using ?
    3. Create an object of HybridCalculator and display results of simple and scientific calculator
    4. How is code reusability implemented ?
*/
#include <iostream>
using namespace std;

class SimpleCalculator
{
    protected:
        int a, b;
    public:
        int add()
        {
            return ( a + b );
        }
        int sub()
        {
            return ( a - b );
        }
        int mul()
        {
            return ( a * b );
        }
        int div()
        {
            return ( a / b );
        }
};

class ScientificCalculator
{
    protected:
        int x;
    public:
        int sq()
        {
            return ( x * x );
        }
        int cb()
        {
            return ( x * x * x );
        }
        int aio1()
        {
            return ( x / x * x + x - x );
        }
        int aio2()
        {
            return ( x - x + x * x / x);
        }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
    public:
        void input(int p, int q = 1)
        {
            a = p;
            x = p;
            b = q;
        }
        void display()
        {

        }
};

int main()
{
    int num1, num2;
    HybridCalculator calc;
    cout << "Enter two numbers : ";
    cin >> num1 >> num2;
    calc.input(num1,num2);
    cout << "SimpleCalculator.sum : " << calc.add() << endl;
    cout << "SimpleCalculator.sub : " << calc.sub() << endl;
    cout << "SimpleCalculator.mul : " << calc.mul() << endl;
    cout << "SimpleCalculator.div : " << calc.div() << endl;
    cout << "Enter a number : ";
    cin >> num1;
    calc.input(num1);
    cout << "ScientificCalculator.sq : " << calc.sq() << endl;
    cout << "ScientificCalculator.cb : " << calc.cb() << endl;
    cout << "ScientificCalculator.aio1 : " << calc.aio1() << endl;
    cout << "ScientificCalculator.aio2 : " << calc.aio2() << endl;
    return 0;
}

/*  1. Multiple Inheritance is being used in the program.
    2. The mode of inheritance being used here is public
    4. Code Reusability is implement here, as if someone wants to carry only SimpleCalculator functions here can do that by simply using SimpleCalculator class.
        And the same goes for ScienitificCalculator. But, what if someone wants to use both the calculators mentioned above. Well, he can easily use HybridCalculator easily without having the need to create more functions. Rather than using the functions already present in the program.
*/