#include <iostream>
using namespace std;

template <class T1>

T1 funcAvg(T1 a, T1 b)
{
    T1 avg = (a + b)/2.0;
    return avg;
}

int main()
{
    double a;
    a = funcAvg(23.24242, 234.3434);
    printf("The average is %f",a);
    return 0;
}