/*
    A
    A B
    A B C
    A B C D
    A B C D E
*/

#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    for(int i = 0; i < size; i++)
    {
        int a = (int)'A';
        for(int j = 0; j <= i; j++)
        {
            cout << (char)a << ' ';
            a++;
        }
        cout << endl;
    }
    return 0;
}