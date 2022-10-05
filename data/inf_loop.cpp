// Infinite Loop
#include <iostream>
using namespace std;
int main()
{
    int ch, i;
    cout << "Which infinite loop do you want ? 1. For Loop  2. While Loop  3. Do-While Loop" << endl;
    cin >> ch;
    switch (ch)
    {
        case 1:
            for (i = 10 ; i > 0 ; i++)
                cout << "Infinite Loop";
        break;
        case 2:
            i = 10;
            while (i > 0)
                cout << "Infinite Loop";
                i++;
        break;
        case 3:
            i = 10;
            do
            {
                cout << "Infinite Loop";
                i++;
            } while (i>0);
        break;
        default:
            cout << "Invalid Option";
        break;
    }
    return 0;
}