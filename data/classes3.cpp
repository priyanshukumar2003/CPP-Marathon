#include <iostream>
using namespace std;
int num;
class CLaSS
{
    private:
        void input();
    public:
        void display();
} ob ;

void CLaSS :: input()
{
    cout << "Enter a number " << endl;
    cin >> num;
}

void CLaSS :: display()
{
    input();
    cout << "The number you entered was " << num << endl;
}

int main()
{
    ob.display();
    return 0;
}