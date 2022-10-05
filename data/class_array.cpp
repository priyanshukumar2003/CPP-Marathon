#include <iostream>
using namespace std;
class Shop
{
    int itemID[10];
    int itemPrice[10];
    int counter;
    public:
        void initCounter() { counter = 0; }
        void addData();
        void getData();
} dukaan;

// By default all functions and variables get declared private

void Shop :: addData()
{
    cout << "Enter itemID for item no. " << counter + 1 << endl;
    cin >> itemID[counter];
    cout << "Enter itemPrice for item no " << counter + 1 << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop :: getData()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "itemID : " << itemID[i] << "\titemPrice : " << itemPrice[i] << endl;
    }   
}

int main()
{
    dukaan.initCounter();
    dukaan.addData();
    dukaan.addData();
    dukaan.addData();
    dukaan.addData();
    dukaan.addData();
    dukaan.getData();
    return 0;
}