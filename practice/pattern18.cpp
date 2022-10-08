/*
    E
    D E
    C D E
    B C D E
    A B C D E
*/

#include <iostream>
using namespace std;

int main()
{
    int size = 5, a = (int)'E';
    for(int i = 0; i < size; i++)
    {
        int b = a;
        for(int j = 0; j <= i ; j++)
        {
            cout << (char)b << ' ';
            b++;
        }
        a--;
        cout << endl;
    }
}