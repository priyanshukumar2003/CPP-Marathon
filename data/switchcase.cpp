#include <iostream>
using namespace std;
int main()
{
    int ch;
    cout << "Enter a number (1 to 5) " << endl;
    cin >> ch;
    switch (ch)
    {
        case 1:
            cout << "You have entered 1";
            break;
        case 2:
            cout << "You have entered 2";
            break;
        case 3:
            cout << "You have entered 3";
            break;
        case 4:
            cout << "You have entered 4";
            break;
        case 5:
            cout << "You have entered 5";
            break;
        default:
            cout << "Invalid Input";
            break;
    }
    return 0;
}