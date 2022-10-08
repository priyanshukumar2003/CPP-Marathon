/*
    *                 *
    * *             * *
    * * *         * * *
    * * * *     * * * *
    * * * * * * * * * * 
    * * * *     * * * *
    * * *         * * *
    * *             * *
    *                 *
*/

#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j <= i; j++)
            cout << "* ";
        for(int k = size; k > i+1; k--)
            cout << "  ";
        for(int k = size; k > i+1; k--)
            cout << "  ";
        for(int l = 0; l <=i; l++)
            cout << "* ";
        cout << endl;
    }
    for(int i = size; i > 0; i--)
    {
        for(int j = 0; j < i; j++)
            cout << "* ";
        for(int k = size; k > i; k--)
            cout << "  ";
        for(int k = size; k > i; k--)
            cout << "  ";
        for(int l = 0; l < i; l++)
            cout << "* ";
        cout << endl;
    }
}