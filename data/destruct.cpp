#include <iostream>
using namespace std;
int count = 0;
class Number
{
    int a;
    public:
        Number()
        {
            count++;
            cout << "Constructor Called " << count << endl;
        }
        ~Number()
        {
            cout << "Destructor Called " << count << endl;
            count--;
        }
};

int main()
{
    cout << "We are inside main block" << endl;
    cout << "Creating block new1" << endl;
    Number new1;
    {
        cout << "Entering block new1" << endl;
        cout << "Creating two more blocks new2 and new3" << endl;
        Number new2, new3; 
        cout << "Exiting block new1" << endl;
    }
    cout << "Back to main" << endl;
    return 0;
}