#include <iostream>
using namespace std;
class Emp
{
    int id, salary;
    public:
        void setID()
        {
            salary = 122;
            cout << "Enter ID of employee " << endl;
            cin >> id;
        }
        void getID()
        {
            cout << "The ID of employee is : " << id << endl;
        }
};

int main()
{
    Emp ob[4];
    ob[0].setID();
    ob[1].setID();
    ob[2].setID();
    ob[3].setID();
    ob[0].getID();
    ob[1].getID();
    ob[2].getID();
    ob[3].getID();
}