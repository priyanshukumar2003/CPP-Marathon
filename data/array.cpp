#include <iostream>
using namespace std;
int main()
{
    // Method 1 to initialise an array
    cout << "METHOD 1";
    int arr[]={ 10, 20, 30, 40, 50};
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
    cout << arr[4] << endl;
    // Method 2 to initialise an array
    cout << endl << endl << "METHOD 2";
    int arr1[5];
    arr1[0] = 2;
    arr1[1] = 3;
    arr1[2] = 5;
    arr1[3] = 7;
    arr1[4] = 11;
    cout << arr1[0] << endl;
    cout << arr1[1] << endl;
    cout << arr1[2] << endl;
    cout << arr1[3] << endl;
    cout << arr1[4] << endl;

    // Method 3 to initialise an array
    cout << endl << endl << "METHOD 3";
    int arr2[5];
    for (int i = 0; i < 5; i++)
    {
        arr2[i] = i*10+37;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << endl;
    }

    return 0;
}