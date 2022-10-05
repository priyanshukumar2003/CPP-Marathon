#include <iostream>
using namespace std;

int main()
{
    // Basic Usecase
    int a = 4;
    int *ptr = &a;
    cout << "Value of a is " << *ptr << endl;

    // new keyword
    int *p = new int(40);
    float *pt = new float(3.142);
    cout << "Value of p is " << *p << endl;
    cout << "Value of pt is " << *pt << endl;

    int *arr = new int[3];
    arr[0] = 10;
    *(arr+1) = 20;
    arr[2] = 30;
    cout << "Value of arr[0] is " << arr[0] << endl;
    cout << "Value of arr[1] is " << arr[1] << endl;
    cout << "Value of arr[2] is " << arr[2] << endl;

    // delete keyword
    delete[] arr;
    cout << "Value of arr[0] is " << arr[0] << endl;
    cout << "Value of arr[1] is " << arr[1] << endl;
    cout << "Value of arr[2] is " << arr[2] << endl; // This line will show same output as in line 23. This is due to aa fault in VS Code. Use other compiler.
    
    return 0;
}