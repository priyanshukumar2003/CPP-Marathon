/*
    A B C D E
    A B C D
    A B C
    A B
    A
*/

#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    for(int i = size; i > 0; i--)
    {
        int a = (int)'A';
        for(int j = 0; j < i; j++)
        {
            cout << (char)a << ' ';
            a++;
        }
        cout << endl;
    }
    return 0;
}