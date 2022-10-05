// Structure but we will use typedef to make it short
#include <iostream>
using namespace std;

typedef struct struct_typedef
{
    int a;
    char b;
} st;

int main()
{
    st new1;
    new1.a = 1;
    new1.b = 'A';
    cout << new1.a << endl << new1.b << endl;
    return 0;
}