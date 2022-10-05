#include <iostream>
using namespace std;
class student
{
    protected:
        int rollno;
    public:
        void setnumber(int);
        void getnumber(void);
};

class exam : public student
{
    protected:
        float math, phy, chem;
    public:
        void setmarks(float, float, float);
        void getmarks();
};

class  result : public exam
{
    float percentage;
    public:
        void display();
};

void student :: setnumber(int r)
{
    rollno = r;
}

void student :: getnumber()
{
    cout << "Roll NO : " << rollno << endl;
}

void exam :: setmarks(float m, float p, float c)
{
    math = m;
    phy = p;
    chem = c;
}

void exam :: getmarks()
{
    cout << "Maths : " << math << "\nPhysics : " << phy << "\nChem : " << chem << endl;
}

void result :: display()
{
    getnumber();
    getmarks();
    cout << "Percentage : " << (math+phy+chem)/3 << endl;
}

int main()
{
    result s1;
    s1.setnumber(1001);
    s1.setmarks(99.9, 100, 100);
    s1.display();
    return 0;
}