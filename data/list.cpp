#include <iostream>
#include <list>
using namespace std;

void display(list <int> &lst)
{
    list <int> :: iterator it;
    for (it = lst.begin() ; it != lst.end() ; it++ )
    {
        cout << *it << ' ';
    }
    cout << "Display done" << endl;
}

int main()
{
    list <int> list1;   // list of 0 lenght
    list <int> list2(7);  // empty list of size 7
    list1.push_back(5);  // inserting elements from end
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(8);
    list1.push_back(9);
    list1.push_back(10);
    list1.push_front(11);  // insserting element from front.
    display(list1);
    list1.pop_back();  // remove element from list from end
    list1.pop_front();  // remove elements from list from begin
    display(list1);
    list1.sort();   // sorting in ascending order
    display(list1);
    list1.merge(list2);  // merging two lists
    cout << "List1 after merging " << endl;
    display(list1);
    list1.reverse();  // reversing the list
    display(list1);
    return 0;
}