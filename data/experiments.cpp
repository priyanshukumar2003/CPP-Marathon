// This file includes all the experiments performed by me. 
#include <iostream>
using namespace std;

// Experiment 1 : Does struct using file name or it can be anyname
/*
struct exp
{
    int a;
    char b;
};

int main()
{
    struct exp ee1;
    ee1.a = 12;
    ee1.b = 'A';
    cout << "ee1.a and ee1.b are " << ee1.a << " " << ee1.b << endl;
    return 0;
}
*/
// Experiment 1 Conclusion : Struct can be anything and not just file names. But, another experiment awaits where we will check if struct should be class name or not.

// Experiment 2 : Can we use inline function and static together.      !! NOT RECOMMENDED
/*
inline int sum(int a, int b)
{
    static int c = 0;
    c++;
    return (a+b+c);
}

int main()
{
    int a = 4, b = 5;
    cout << "The sum of 4 and 5 is " << sum(a,b) << endl;
    cout << "The sum of 4 and 5 is " << sum(a,b) << endl;
    cout << "The sum of 4 and 5 is " << sum(a,b) << endl;
    cout << "The sum of 4 and 5 is " << sum(a,b) << endl;
    cout << "The sum of 4 and 5 is " << sum(a,b) << endl;
    cout << "The sum of 4 and 5 is " << sum(a,b) << endl;
    cout << "The sum of 4 and 5 is " << sum(a,b) << endl;
    cout << "The sum of 4 and 5 is " << sum(a,b) << endl;
    cout << "The sum of 4 and 5 is " << sum(a,b) << endl;
    cout << "The sum of 4 and 5 is " << sum(a,b) << endl;
}
*/
// Experiment 2 Conclusion : The program works but the only fault is execution is slower than normal by few seconds.

// Experiment 3 :  Does the division turn out to be in decimal if data types are float.
/*
int main()
{
    float a = 12.5;
    int b = 5;
    cout << a/b;
    return 0;
}
*/
// Experiment 3 Conclusion : Yes, it does.

// Experiment 4 : My friend was facing issues in this : Program to convert decimal to binary
/*
#include <math.h>
int main()
{
    int n, ans = 0, i = 0;
    cout << "Enter number : ";
    cin >> n;
    while(n!=0)
    {
        int digit = n&1;
        ans = ( digit * pow(10,i)) + ans;
        n = n>>1;
        i++;
    }
    cout << "Answer is " << ans << endl;
    return 0;
}
*/
// Experiment 4 Conclusion output was not as intended. There is some issue in VS Code.

// Experiment 5 : Creating class object using new operator as done in JAVA
/*class Complex
{
    int a, b;
    public:
        void setData(int x, int y)
        {
            a = x;
            b = y;
        }
        void getData()
        {
            cout << a << ' ' << b << endl;
        }
};

int main()
{
    Complex *comp = new Complex;
    // Complex comp = new Complex; // Failure
    (*comp).setData(1,2);
    (*comp).getData();
    return 0;
}
*/
// Experiment 5 Conclusion : Experiment was a failure. C++ does not allow object creation directly using new keyword. But we can easily create an object easily just by using a pointer.

// Experiment 6 : Checking if File Handlig Written in book works or not
/*
#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("sample1.txt", "r");
    if(fp == NULL)
    {
        cout << "Cannot open file" << endl;
    }
    else
    {
        cout << "File exists" << endl;
    }
    fclose(fp);
    return 0;
}
*/
// Experiment 6 Conclusion : From the experiment what I found is, stdio.h works pretty well in CPP and can be use for File Handling, though it being a C header.

// Experiment 7 : Using C print functions in CPP
/*
int main()
{
    printf("This is print function in C %d",100);
}
*/
// Experiment 7 Conclusion : From this as well as Exp6 we can conclude that all C functions work very well in CPP

// Experiment 8 : Passing array as pointers to functions
/*
void display(int &a)
{
    for (int i = 0; i < 7; i++)
    {
        cout << (a+i) << ' ';
    }
    cout << "Display Done" << endl;
    
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7};
    display(*arr);
    return 0;    
}
*/
// Experiment 8 Conclusion : This taught me how to exaactly pass pointers to function