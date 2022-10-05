#include <iostream>
using namespace std;

int area(int n)
{
    return n*n;
}

int area(int a, int b)
{
    return (a*b);
}

int area(int a, int b, int c)
{
    int s = (a + b + c)/3;
    return (s);
}

int main()
{
    cout << "Area of square of size 6 : " << area(6) << endl;
    cout << "Area of rectangle with sides 4 and 6 : " << area(4,6) << endl;
    cout << "Approx area of isosceles triangle of sides 3 4 5 : " << area(3,4,5) << endl; // Answer is incorrect. Program made just for the sake of demonstrating function overloading
    return 0;
}