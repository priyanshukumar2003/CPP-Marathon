#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out;
    out.open("sample.txt");
    out << "This is 1\n";
    out << "This is 2\n";
    out << "This is 3\n";
    out << "This is 4\n";
    out.close();

    ifstream in;
    string st, st1, st2;
    in.open("sample.txt");
    // in >> st1 >> st2;
    // cout << st1 << st2;

    while(in.eof()==0)
    {
        getline(in,st);
        cout << st << endl;
    }
    in.close();
    return 0;
}