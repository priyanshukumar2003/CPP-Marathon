/*
    A
    B B
    C C C
    D D D D
    E E E E E
*/

#include <iostream>
using namespace std;

int main()
{
    int size = 5, a = (char)'A';
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j <= i; j++)
            cout << (char)a << ' ';
        a++;
        cout << endl;
    }
    return 0;
}