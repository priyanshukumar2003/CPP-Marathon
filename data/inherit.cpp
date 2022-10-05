#include <iostream>
using namespace std;

// Base Class
class Employee
{
    public:
        int id;
        int salary;
        Employee(int intID)
        {
            id = intID;
            salary = 10000;
        }
        Employee(){}
};

// Derived Class
class Programmer : Employee
{
    public:
        int language = 9;
        Programmer(int intID)
        {
            id = intID;
        }
        void getData()
        {
            cout << id << endl;
        }
};

int main()
{
    Employee e1(1001), e2(1002);
    cout << e1.salary << ' ' << e2.salary << endl;
    Programmer skillF(1);
    skillF.getData();
    return 0;
}