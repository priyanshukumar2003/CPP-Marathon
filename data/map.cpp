#include <iostream>
#include <map>
#include <string>
using namespace std;

void display(map <string, int> &m)
{
    map <string, int> :: iterator itr;
    for (itr = m.begin(); itr != m.end(); itr++)
    {
        cout << (*itr).first << " " << (*itr).second << endl;  // using asterik will give access to data in iterator. As, the map is storing two values, we get the sting by using itr.first and int by using itr.second
    }
    
}

int main()
{
    map <string, int> marksMap;
    marksMap["Harry"] = 98;
    marksMap["Jack"] = 9;
    marksMap["Rohan"] = 8;
    display(marksMap);
    cout << "Sixe of marksMap " << marksMap.size() << endl;
    return 0;
}