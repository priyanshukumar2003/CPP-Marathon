#include <iostream>
using namespace std;

class BankDeposit
{
    int principal, time, amount;
    float interestRate;
    public:
        BankDeposit();
        BankDeposit(int p, int r, int t);
        BankDeposit(int p, float r, int t);
        void show();
};

BankDeposit :: BankDeposit()
{
    principal = 0;
    interestRate = 0;
    time = 0;
    amount = 0;
}

BankDeposit :: BankDeposit(int p, int r, int t)
{
    principal = p;
    interestRate = float(r)/100;
    time = t;
    amount = principal + principal * interestRate * time;    
}

BankDeposit :: BankDeposit(int p, float r, int t)
{
    principal = p;
    interestRate = r;
    time = t;
    amount = principal + principal * interestRate * time;    
}

void BankDeposit :: show()
{
    cout << "Principal : " << principal << "\nInterestRate (in percentage) : " << interestRate * 100 << "\nTime : " << time << "\nInterest Earned : " << (amount - principal) << "\nAmount Received : " << amount << endl;
}

int main()
{
    BankDeposit bd3;
    int p, r, t;
    float R;
    cout << "Enter principal, rate and time : ";
    cin >> p >> r >> t;
    BankDeposit bd1(p,r,t);
    bd1.show();
    cout << endl;
    cout << "Enter principal, rate and time : ";
    cin >> p >> R >> t;
    BankDeposit bd2(p,R,t);
    bd2.show();
    cout << endl;
    bd3.show();
    return 0;
}