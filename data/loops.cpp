#include <iostream>
using namespace std;
int main()
{
    // for loop
    for (int i = 0; i < 5; i++)
    {
        cout << "Count i " << i << "   ";
    }
    cout << endl;
    // While Loop
    int j=0;
    while (j<5)
    {
        cout << "Count j " << j << "  ";
        j++;
    }
    cout << endl;
    // DO-While Loop
    int k = 0;
    do
    {
        cout << "Count k " << k << "  ";
        k++;
    } while (k<5);
    
    return 0;
}