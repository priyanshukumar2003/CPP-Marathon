// Program to count the number of digis in a number
#include <iostream>
using namespace std;
int main()
{
    int num, n, d, count = 0;
    cout << "Enter a number ";
    cin >> num;
    n = num;
    while(n != 0)
    {
        d = n % 10;
        n = n/10;
        count++;
    }
    cout << "The number of digits is " << count << endl;
}