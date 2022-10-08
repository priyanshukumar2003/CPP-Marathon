/* 
              *
            * * *
          * * * * *
        * * * * * * *
      * * * * * * * * *
    * * * * * * * * * * *
*/

#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    for (int i = 0; i <= size; i++)
    {
        for (int j = size; j > i; j--)
            cout << "  ";
        for (int k = 0; k < i; k++)
            cout << "* ";
        cout << "* ";
        for (int l = 1; l <= i; l++)
            cout << "* ";
        cout << endl;        
    }
    
}