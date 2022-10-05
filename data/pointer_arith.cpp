// Program to do arithmetic operations on pointer
#include <iostream>
using namespace std;
int main()
{
    int arr[] = { 11, 13, 17, 19, 23, 29};
    int *p = arr;
    cout << "The value of arr[0] is " << *p << endl;
    cout << "The value of arr[1] is " << *(p+1) << endl;
    cout << "The value of arr[2] is " << *(p+2) << endl;
    cout << "The value of arr[3] is " << *(p+3) << endl;
    cout << "The value of arr[4] is " << *(p+4) << endl;
    cout << "The value of arr[5] is " << *(p+5) << endl;
    return 0;
}