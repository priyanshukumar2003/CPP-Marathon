/*
    * * * * * * * * * * 
    * * * *     * * * *
    * * *         * * *
    * *             * *
    *                 *
    * *             * *
    * * *         * * *
    * * * *     * * * *
    * * * * * * * * * *
*/

#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    for(int i = 0; i < size; i++)
    {
        for(int j = size; j > i; j--)
            cout << "* ";
        for(int k = 0; k < 2*i; k++)
            cout << "  ";
        for(int l = size; l > i; l--)
            cout << "* ";
        cout << endl;
    }
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j <= i; j++)
            cout << "* ";
        for(int k = size; k > i+1; k--)
            cout << "  ";
        for(int k = size; k > i+1; k--)
            cout << "  ";
        for(int l = 0; l <= i; l++)
            cout << "* ";
        cout << endl;
    }
}