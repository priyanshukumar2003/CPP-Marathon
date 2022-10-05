
/* DOCUMENTATION
    When we create objects and use a varible count. Then, count is used separately. But, what if we want to use single count variable common for all objects we create. 
    For that please refer line 12 and 27. Those are important.
*/
#include <iostream>
using namespace std;

class Emp
{
    int id;
    static int count; // count is declared static so that it does not get removed from memory when a function call is finished.
    public:
        void getID()
        {
            cout << "Enter employee id : ";
            cin >> id;
            count++;
        }
        void showID()
        {
            cout << "Employee ID is : " << id << endl;
            cout << "Count is : " << count << endl;
        }
} P1, P2, P3;

int Emp :: count; // Here, count is static data member of class.
// Normally count would start from 0 but, if we want count to start from desired number then,
// int Emp :: count = value;

int main()
{
    P1.getID();
    P1.showID();

    P2.getID();
    P2.showID();

    P3.getID();
    P3.showID();

    return 0;
}