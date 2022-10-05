#include <iostream>
using namespace std;

/*  student --> test
    student --> sports
    test --> result
    sports --> result
*/

class student
{
    protected:
        int rollno;
    public:
        void setnum(int a)
        {
            rollno = a;
        }
        void printnum()
        {
            cout << "Roll no. " << rollno << endl;
        }
};

class test : virtual public student
{
    protected:
        float math, phy, chem;
    public:
        void setmks(float m, float p, float c)
        {
            math = m;
            phy = p;
            chem = c;
        }
        void printmks()
        {
            cout << "Maths : " << math << endl
                 << "Physics : " << phy << endl
                 << "Chemistry : " << chem << endl;
        }
};

class sports : virtual public student
{
    protected:
        float score;
    public:
        void setscore(int a)
        {
            score = a;
        }
        void printscore()
        {
            cout << "PT Score : " << score << endl;
        }
};

class results : public test, public sports
{
    private:
        float total;
    public:
        void display()
        {
            total = math + phy + chem + score;
            printnum();
            printmks();
            printscore();
            cout << "Your total score is " << total << endl;
        }
};

int main()
{
    results res;
    res.setmks(80,70,99);
    res.setnum(1001);
    res.setscore(9);
    res.display();
    return 0;
}