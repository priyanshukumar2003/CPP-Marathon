/*
          A
        A B A
      A B C B A
    A B C D C B A
*/

#include <iostream>
using namespace std;

int main()
{
    int size = 5, a;
    for(int i = 0; i < size; i++)
    {
        int a = (int)'A';
        for(int j = size; j >= i; j--)
            cout << "  ";
        for(int k = 0; k <= i; k++)
        {
            cout << (char)a << ' ';
            a++;
        }
        a--;
        for(int l = 1; l <= i; l++ )
        {
            a--;
            cout << (char)a << ' ';
        }
        cout << endl;
    }
    return 0;
}