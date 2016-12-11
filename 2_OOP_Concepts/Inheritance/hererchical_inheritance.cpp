#include <iostream>
using namespace std;

class Account
{

    protected:
        string Name;
        long int AccNo;
        string Type;
        double Balance;
        static long int AccountNumber;
    public:
        void setData(string n) { Name = n; }
        void deposit(int amt) { Balance = Balance + amt; }
        void getData()
        {
            cout << "Name: " << Name << endl;
            cout << "Acc No. " << AccNo << endl;
            cout << "Acc Type: " << Type << endl;
            cout << "Balance:  " << Balance << endl;
        }
        virtual void calcInterest() {}
        virtual void about() = 0;

};
long int Account :: AccountNumber = 123456789;

class Cur_Acc : public Account
{
    public:
        Cur_Acc()
        {
            AccNo = AccountNumber++ ;
            Type = "current account";
            Balance = 0;
        }
        void about()
        {
            cout << "This is a current account and has cheque book facility" << endl;
        }

};

class Sav_Acc : public Account
{
    public:
        Sav_Acc()
        {
            AccNo = AccountNumber++ ;
            Type = "saving account";
            Balance = 0;
        }
        virtual void calcInterest()
        {
            cout << "hello" << endl;
        }
        void about()
        {
            cout << "This is a saving and offers 5% interest rate" << endl;
        }
};

void showDetails(Account &a)
{
    a.getData();
    a.about();
}

int main()
{
    string name;
    double amount;

    Cur_Acc c;
    Sav_Acc s;

    Account *acc1 = &c;
    Account *acc2 = &s;
    cout << "Enter Acc 1 details: " << endl;
    cout << "Name: ";   cin >> name;
    cout << "Deposit money: ";  cin >> amount;
    acc1->setData(name);
    acc1->deposit(amount);

    cout << "Enter Acc 2 details: " << endl;
    cout << "Name: ";   cin >> name;
    cout << "Deposit money: ";  cin >> amount;
    acc2->setData(name);
    acc2->deposit(amount);
    acc2->calcInterest();

    showDetails(c);
    showDetails(s);
}
