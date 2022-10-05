// This program shows the variable confusion in global and local variable.
#include <iostream>
using namespace std;

int glo = 10;  // Global variable

void sum()
{
    cout << glo << endl;
}

int main()
{
    int glo = 20; // Local Variable
    cout << glo << endl; // This prints local variable
    sum(); // This prints global variable. Bcoz, the program now enters function sum. And, in function sum what happens is, the function now does not know about the local variable glo existing inside the main function.
}