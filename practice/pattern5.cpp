/*
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
    int size;
    cout << "Enter the number of rows and columns ";
    cin >> size;
    for (int i = size; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;        
    }
    
}