#include <iostream>
using namespace std;
int main()
{
    int mks;
    cout << "Enter your marks " << endl;
    cin >> mks;
    if(mks >=90)
        cout << "Grade O" << endl;
    else if (mks >=80 && mks <90)
        cout << "Grade A" << endl;
    else if(mks >=70 && mks <80)
        cout << "Grade B" << endl;
    else if(mks >=60 && mks <70)
        cout << "Grade C" << endl;
    else if(mks >=50 && mks <60)
        cout << "Grade D" << endl;
    else if(mks >=40 && mks <50)
        cout << "Grade E" << endl;
    else if(mks >=20 && mks <40)
        cout << "Grade F. But, you are eligible for re-exams";
    else if(mks <20)
        cout << "You failed mmiserably. You future is a complete darkness." << endl;
    else
        cout << "Please enter a number within range of 0 to 100." << endl;
    return 0;
}