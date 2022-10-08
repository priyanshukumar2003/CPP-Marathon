/*
    * * * * *
    *       *
    *       *
    *       *
    * * * * *
*/

#include <iostream>
using namespace std;

int main()
{
    int size = 50;
    for(int i = 0; i < size; i++)
    {
        if(i == 0 || i == size-1)
            for(int j = 0; j < size; j++)
                cout << "* ";
        else
        {
            cout << "* ";
            for(int j = 2; j < size; j++)
                cout << "  ";
            cout << "* ";
        }
        cout << endl;
    }
}