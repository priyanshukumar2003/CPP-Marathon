#include <iostream>
using namespace std;

template <class T>
class Vector
{
public:
    int size;
    T *arr;
    Vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotProd(Vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    Vector <int> v1(3);
    v1.arr[0] = 1;
    v1.arr[1] = 0;
    v1.arr[2] = 1;

    Vector <int> v2(3);
    v2.arr[0] = 2;
    v2.arr[1] = 3;
    v2.arr[2] = 4;

    int a = v1.dotProd(v2);
    cout << a << endl;
    return 0;
}