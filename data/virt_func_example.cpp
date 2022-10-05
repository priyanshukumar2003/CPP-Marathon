#include <iostream>
using namespace std;

class CWH
{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r)
        {
            title = s;
            rating = r;
        }
        virtual void display()
        {
            cout << "CWH Class";
        }
};

class CWHVideo : public CWH
{
    int videoL;
    public:
        CWHVideo(string s, float r, int vl) : CWH(s, r)
        {
            videoL = vl;
        }
        void display()
        {
            cout << "This is an amazing video with title " << title << endl;
            cout << "Rating: " << rating << " out of 5 stars" <<endl;
            cout << "VideoLength (in minutes) : " << videoL << endl;
        }
};

class CWHTxt : public CWH
{
    int words;
    public:
        CWHTxt(string s, float r, int wc) : CWH(s, r)
        {
            words = wc;
        }
        void display()
        {
            cout << "Video Title " << title << endl;
            cout << "Rating out of 5 : " << rating << endl;
            cout << "No. of words :  " << words << endl;
        }
};

int main()
{
    string title;
    float rating, vlen;
    int word;

    // For CWH Video
    title = "CPP Tutorial Video";
    vlen = 4.56;
    rating = 4.67;
    CWHVideo CPP(title, rating, vlen);
    // CPP.display();

    // For CWH Text
    title = "CPP Tutorial Text";
    rating = 4.67;
    word = 433;
    CWHTxt CPT(title, rating, word);
    // CPT.display();

    CWH* tuts[2];
    tuts[0] = &CPP;
    tuts[1] = &CPT;

    tuts[0] -> display();
    tuts[1] -> display();

    return 0;
}

/* DOCUMENTATION
    Here, in this program what happens is ->>
    1. 3 classes have been created {CWH, CWHVideo, CWHTxt}.
    2. Skipping all the crap. The main point that we are trying to understand is -->
        While running CPP.display and CPT.display they will output their display functions, as the object creation was done for their classes.
        Next coming to Ln73, we create object of CWH class. And, because we have used virtual in Ln15 we get to see display functions of CPP and CPT.
        And, if we hadn't done so. No matter if we are calling CPP.display or CPT.display {See line 77, 78}, what we will get to see is CWH.display.
*/