// Union in combination with typedef
#include <iostream>
using namespace std;

typedef union uniq
{
    int a;
    char b;
} un;

int main()
{
    un new1;
    new1.a = 12;
    cout << new1.a << endl;
    return 0;
}