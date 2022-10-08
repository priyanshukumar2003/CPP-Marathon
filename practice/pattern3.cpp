/*
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
*/

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the number of rows and columns ";
    cin >> size;
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
        
    }
    
}