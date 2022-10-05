#include <iostream>
using namespace std;
struct structure
{
    int sl;
    char ch;
    float num;
};

int main()
{
    struct structure new1;
    new1.sl = 1;
    new1.ch = 'A';
    new1.num = 10;
    cout << new1.sl << endl;
    cout << new1.ch << endl;
    cout << new1.num << endl;
    return 0;    
}