#include <iostream>
using namespace std;

template <class T>  // T can be whatever you desire but make sure to use the same variable thoughout the program wherever T is required
class Vector // Creating a class Vector
{
    public:   // All members will be declared public
        int size;
        T *arr;   // T datatype pointer arr is created;
        Vector(int m)   // Construtor defined 
        {
            size = m;
            arr = new T[size];    // arr is an arr. And, the earlier pointer points to memory location which is arr[0]
        }
        T dotProd(Vector &v)    // function dotProd of data type T is created which takes object of Vector as argument
        {
            T d = 0;    // T type variable d created and initialised with 0
            for (int i = 0; i < size; i++)
            {
                d += this->arr[i] * v.arr[i];    // The actual opera-tion happening is d = d + this->arr[i] * v.arr[i]; meaning the value stored in arr[i] of current object is multiplied with the value stored in arr[i] of another object of Vector that will be passed in Vector &v
            }
            return d;
        }
};

int main()
{
    Vector <int> v1(3);    // int type data is used here, so T in Ln4 now becomes int. Also, 3 is being passed to the constructor.
    v1.arr[0] = 1;   // As, arr is an array of size 3
    v1.arr[1] = 0;
    v1.arr[2] = 1;

    Vector <int> v2(3);
    v2.arr[0] = 4;
    v2.arr[1] = 9;
    v2.arr[2] = 6;

    int a = v1.dotProd(v2);   // dotProd function which returned T now returns int which is stored in a. Also, the Vector &v becomes v2
    cout << a << endl;
    return 0;
}