#include <iostream>
using namespace std;

class Shop
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << "ID " << id << "\nPrice " << price << endl;
    }
};

int main()
{
    int size = 3, p, q;
    Shop *ptr = new Shop[size];
    Shop *ptrTemp = ptr;
    for (int i = 0; i < size; i++)
    {
        cout << "ID and price of item " << i + 1 << endl;
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Item number " << i+1 << endl;
        ptrTemp -> getData();
        ptrTemp++;
    }
    return 0;
}