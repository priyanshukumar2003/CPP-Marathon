/*
    1               1
    1 2           2 1
    1 2 3       3 2 1
    1 2 3 4   4 3 2 1
    1 2 3 4 5 4 3 2 1
*/

#include <iostream>
using namespace std;

int main()
{
    int size = 5, j;
    for(int i = 1; i <= size; i++)
    {
        for( j = 1; j <= i; j++)
            cout << j << " ";
        for(int k = size; k > i; k--)
            cout << "  ";
        for(int l = size; l > i; l--)
            cout << "  ";
        for(int m = (j-1); m >= 1; m--)
            cout << m << " ";
        cout << endl;
    }
}