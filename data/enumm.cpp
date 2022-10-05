#include <iostream>
using namespace std;

int main()
{
    enum Time { dawn, sunrise, morning, noon, afternoon, evening, sunset, dusk, night, midnight};
    Time t1 = dusk;
    cout << noon << endl;
    cout << t1 << endl;
    return 0;
}