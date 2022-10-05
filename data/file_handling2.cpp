#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out("sample.txt");;
    string name;
    cout << "Enter you name ";
    cin >> name;
    out << name;
    out.close();
    
    ifstream in("sample.txt");
    string content;
    in >> content;
    cout << content;
    in.close();
    return 0;
}