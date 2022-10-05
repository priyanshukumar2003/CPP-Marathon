#include <iostream>
using namespace std;
int main()
{
    // Use of break statement
    for (int i = 0; i <= 5; i++)
    {
        if(i==3)  // Breaks out of loop as soon as i becomes 3
            break;
        cout << i << "  ";
    }
    cout << endl;
    // Use of continue statement
    for (int i = 0; i <= 5; i++)
    {
        if(i==3)  // Skips an interation when i becomes 3
            continue;
        cout << i << "  ";
    }
    return 0;   
}