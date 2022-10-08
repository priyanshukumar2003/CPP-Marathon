/*
    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1
*/

#include <iostream>
using namespace std;

int main()
{
    int size = 5, a = 0;
    for (int i = 1; i <= size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << (i+j)%2 << " ";
        }
        cout << endl;
    }
}