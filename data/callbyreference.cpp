// NOTE: THE FILE NAMED AS FUNCTIONS.CPP AND FUNCTION_PROTOTPYE.CPP ARE EXAMPLES OF CALL BY VALUE. SO, THIS IS CALLBYREFERENCE.CPP AND CALLBYVALUE.CPP DOES NOT EXIST
#include <iostream>
using namespace std;

void swapPointer(int *a, int *b) // Swapping using pointers
{
    int *temp = a;
    a = b;
    b = temp;
}

void swapReference(int &a, int &b) // Swapping using Reference Variables
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 5, b = 4;
    cout << "The value of a and b before swapping " << a << "  " << b << endl;
    swapReference(a, b);
    cout << "The value of a and b after swapping " << a << "  " << b << endl;
    return 0;
}