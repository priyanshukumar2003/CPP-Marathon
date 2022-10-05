// Default Arguments
// NOTE: Default arguments must be to the left. And, comppulsory arguments shall be towards the right. Else it will throw an error.

#include <iostream>
using namespace std;

float moneyReceived(int money, float factor = 1.05)
{
    return (money * factor);
}

int main()
{
    int money = 10000;
    cout << "Money is " << money << " Amount received "  << moneyReceived(money) << endl;
    cout << "Money is " << money << " Amount received "  << moneyReceived(money,2) << endl;
    return 0;
}