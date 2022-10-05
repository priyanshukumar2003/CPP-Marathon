// Function Objects: Functions wrappen in a class so that it is avaliable as an object()
#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = { 21, 3, 513, 72, 11, 13, 17, 19, 23};
    sort(arr, arr+5);  // This will sort the array arr starting from arr[0] to arr[5] in ascending order
    for(int i = 0; i < 9 ; i++ )
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
    sort(arr, arr+5, greater <int>());  // This will sort the array arr starting from arr[0] to arr[5] in descending order
    for(int i = 0; i < 9 ; i++ )
    {
        cout << arr[i] << ' ';
    }
    return 0;
}