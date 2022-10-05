#include <iostream>
using namespace std;

union uni // Using this I can set only one type of data from the given following.
{
    int a;
    char b;
    float c;
};

int main()
{
    union uni new1;
    new1.a = 12;
    new1.b = 'B';
    new1.c = 1234;
    // As we can use only one data type at any given time. The value of others will be a garbage value.
    // And, according to my findings, the data last initialised appears correctly. The earlier ones are garbage.
    cout << new1.a << endl << new1.b << endl << new1.c << endl;
    return 0;
}