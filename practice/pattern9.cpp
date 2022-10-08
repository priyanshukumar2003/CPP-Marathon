/*
              *
            * * *
          * * * * *
        * * * * * * *
      * * * * * * * * *
    * * * * * * * * * * *
      * * * * * * * * *
        * * * * * * *
          * * * * *
            * * *
              *
*/

#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    for (int i = 0; i <= size; i++)
    {
        for (int j = size; j >= i; j--)
            cout << "  ";
        for (int k = 0; k < i; k++)
            cout << "* ";
        cout << "* ";
        for (int l = 1; l <= i; l++)
            cout << "* ";
        cout << endl;        
    }
    for(int a = 0; a <= (2*size+2); a++)
        cout << "* ";
    cout << endl;
    for (int i = 0; i <= size; i++)
    {
        for(int j = 0; j <= i; j++)
            cout << "  ";
        for(int k = size; k > i; k--)
            cout << "* ";
        cout << "* ";
        for(int l = size; l > i; l--)
            cout << "* ";
        cout << endl;
    }
}