/*
    1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15
*/

#include <iostream>
using namespace std;

int main()
{
    int size = 5, a = 1;
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j <=i; j++)
        {
            cout << a << ' ';
            a++;
        }
        cout << endl;
    }
}