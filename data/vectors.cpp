#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector <T> &v)
{
    cout << "Displaying this vector " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' ' << endl;
        cout << v.at(i) << ' ' << endl;  // Displays an element twice
    }
    cout << endl;    
}

// Main function to add elements and display contents in vector
int main()
{
    vector <int> vec1;  // zero length vector
    int ele, size = 4;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to add to vector ";
        cin >> ele;
        vec1.push_back(ele);
    }
    display(vec1);
    vector <int> :: iterator iter = vec1.begin();   // Creation of iterator for vec1 at the beginning
    vec1.insert(iter+2,50, 566);    // vector_obj.insert(iterator, no. of copies, value);
    display(vec1);
    cout << vec1.size();
    return 0;
}

/*
int main()
{
    int size =5;
    vector <int> vec1;   // zero element integer vector
    vector <char> vec2(4); // 4 element char vector
    vector <char> vec3(vec2);  // 4 element char vector from vec2
    vector <int> v(6,3);  // 6 element vector of 3s
    // vec2.push_back('5');
    display(v);
}
*/