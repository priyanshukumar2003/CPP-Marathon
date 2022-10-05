// Why a static function ?
/*  Jb aplog ek aisa function bnana chahte ho jo srif static members (function and variables) ko access kr ske.
    Yeh ek aur time kaam ata hai, jb hum chahte hai ki koi function bas class ke naam se hi run ho jaye. Instead of creating a object and then function.
*/
// Static Function cannot access anything except those variables and functions which are declared static.
#include <iostream>
using namespace std;
class Emp
{
    int id;
    static int count;
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
        static int getCount()
        {
            cout << "The value of count is : " << count << endl;
        }
} P1, P2, P3;

int Emp :: count;

int main()
{
    P1.getID();
    P1.showID();
    Emp::getCount();

    P2.getID();
    P2.showID();
    Emp::getCount();

    P3.getID();
    P3.showID();
    Emp::getCount();
    return 0;
}