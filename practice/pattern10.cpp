/*
    *
    * *
    * * *
    * * * *
    * * * * *
    * * * *
    * * *
    * *
    *
*/

#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    for (int i = 0; i < size; i++)
    {
        for(int j = 0; j < i; j++)
            cout << "* ";
    cout << endl;
    }
    for(int a = 0; a < size; a++)
        cout << "* ";
    cout << endl;
    for(int i = size; i > 1; i--)
    {
        for(int j = 1; j < i; j++)
            cout << "* ";
        cout << endl;
    }
}