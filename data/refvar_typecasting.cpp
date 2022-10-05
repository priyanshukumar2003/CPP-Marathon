#include <iostream>
using namespace std;
int main()
{
    // Reference Variables -> Functions somewhat similarly to a pointer. But, is a bit different.
    float x = 100;
    float &y = x;
    cout << "The value of x " << x << endl << "The value of y " << y << endl;

    // TypeCasting -> Automatically or Manually changing data type of a variable.
    float a = 45.4, b = 45.96;
    cout << "TypeCasting of a (45.4) " << (int)a << endl << "Typecasting of b (45.6) " << int(b) << endl; 
    // Here, while converting to int, the compiler removes values after decimal.
    return 0;
}